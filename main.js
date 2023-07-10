const WebApp = require('webapp');
const bodyParser = require('middleware').bodyParser
const { devManager } = require('./libs/dev_manager')
const devRoute = require('./routers/dev')
const socketSer = require('./libs/socket_ser')
// const myrouter = require('./routers/rest')


const app = WebApp.createApp();

app.use(WebApp.static('./public'));

// app.use('/api', myrouter);
// app.use(WebApp.static('./public'))
app.use(bodyParser.json())
app.use('/api', devRoute)

socketSer.init(app)

devManager.on('join', (dev) => {
	console.info('join ==============:', dev)
	const ctl = devManager.getCtl(dev.devid)
	socketSer.emitMsg('join', dev)
	// 监听到设备上线就请求控制设备
	if (ctl) {
        console.log('on 控制列表已有此设备')
        ctl.controller.request(dev.devid, (err)=>{
            if (err) {
                console.log('request err:', err) 
            } else {
                console.log('request success')
            }
        })
    } else {
        console.log('on 控制列表未有此设备')
        devManager.generateCtl(dev.devid).then((controller)=>{
            controller.on('message', (data) => {
                console.info('[device message]: ', data)
                emitMsg('message', data)
            })
        })
    }
})
devManager.on('lost', (dev) => {
	console.warn('lost ==============:', dev)
	socketSer.emitMsg('lost', dev.devid)
})
/* Rend test */
/* app.get('/temp.html', function(req, res) {
	res.render('temp', { time: Date.now() });
}); */


app.start();
require('iosched').forever();
