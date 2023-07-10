const Router = require('webapp').Router
const { devManager } = require('../libs/dev_manager')
const { emitMsg } = require('../libs/socket_ser')

const router = new Router()

// https://192.168.128.1:7371/api/list
router.get('/list', (req, res) => {
    const list = devManager.getDeviceList()
    res.send({ code: 1, msg: "操作成功", data: list })
})

router.post('/requestControl', (req, res) => {
    // console.log('req.body:', req.body)
    console.log('req.body.devid:', req.body.devid)
    const ctl = devManager.getCtl(req.body.devid)
    // req.body.devid
    if (ctl) {
        console.log('控制列表已有此设备')
        ctl.controller.request(req.body.devid, (err)=>{
            if (err) {
                console.log('request err:', err) 
            } else {
                console.log('request success')
            }
        })
        res.send({ code: 1, msg: "操作成功" })
    } else {
        console.log('控制列表未有此设备')
        devManager.generateCtl(req.body.devid).then((controller)=>{
            controller.on('message', (data) => {
                console.info('[device message]: ', data)
                emitMsg('message', data)
            })
            res.send({code: 1, msg: "操作成功"})
        })
    }
})

router.post('/key', (req, res) => {
    console.log("key_req.body:",req.body)
    console.log("devid:", req.body.devid)
    console.log("data:", req.body.data)
    devManager.sendDeviceInfo(req.body.devid, req.body.data).then(()=>{
        console.log("发送消息成功！")
        res.send({code: 1, msg:"发送消息成功"})
    }).catch((err)=>{
        console.error("发送消息失败：", err)
        res.status(500)
    })
})

router.post('/play', (req, res) => {
    console.log('data:', req.body.data)
    const ctl = devManager.getCtl(req.body.devid)
    devManager.sendDeviceInfo(req.body.devid, req.body.data).then(()=>{
        console.log("发送消息成功！")
        res.send({code: 1, msg:"发送消息成功"})
        ctl.controller.on('message', (data)=>{
            console.log('report data:', data)
            emitMsg("smsg", data)
        })
    }).catch((err)=>{
        console.error("发送消息失败：", err)
        res.status(500)
    })

})

module.exports = router