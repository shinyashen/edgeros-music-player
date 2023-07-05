import WebApp from 'webapp'
import myRouter from './routers/rest'

/* Create App */
const app = WebApp.createApp()

/* Set static path */
app.use(WebApp.static('./public'))

/* Set test rest */
app.use('/api', myRouter)

/* Rend test */
app.get('/temp.html', function (req, res) {
  res.render('temp', { time: Date.now() })
})

/* Start App */
app.start()

/* Event loop */
require('iosched').forever()
