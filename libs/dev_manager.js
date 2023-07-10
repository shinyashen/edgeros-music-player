const console = require('console')
const Device = require('device')
const EventEmitter = require('events')
console.inspectEnable = true

class Dev extends EventEmitter {
    constructor() {
        super()
        this._list = []
        this._ctls = []
        this.init()
    }

    init() {
        let _this = this
        Device.list(false, function (error, list) {
            if (error) {
                console.error('Device list error:', error.message)
                return this.emit('error', '页面异常，请刷新或退出页面重试！');
            } else {
                _this._list = list
                console.log(list)
                list.forEach(function (dev) {
                    console.log(dev.devid, dev.alias)

                })

                // 设备上线
                Device.on('join', (devid, info) => {
                    _this._list.push({ devid, alias: info.report.name })
                    console.info('Device join in:', devid, 'report:', info)
                    _this.emit('join', { devid, alias: info.report.name })
                })

                // 设备掉线
                Device.on('lost', (devid) => {
                    const idx = _this._list.findIndex(item => item.devid === devid)
                    _this._list.splice(idx, 1)
                    _this.emit('lost', { devid })
                    console.warn('Device lost in:', devid)
                })
            }
        })
    }

    // 构建设备控制对象
    generateCtl(devid) {
        const controller = new Device()
        return new Promise((resolve, reject) => {
            controller.request(devid, (error) => {
                if (error) {
                    console.error("control fail:", error.message)
                    reject(error)
                } else {
                    this._ctls.push({ devid, controller })
                    console.info('control success')
                    // this.controllerMap.set(devid, controller)
                    resolve(controller)
                }
            })
        })
    }

    // generateCtl(devid) {
    //     const controller = new Device()
    //     const _this = this
    //     controller.request(devid, function (error) {
    //         if (error) {
    //             console.error("control fail:",error.message)
    //             // cb(error)
    //         } else {
    //             console.info('control success')
    //             _this._ctls.push({ devid, controller })
    //             // cb(null, controller)
    //         }
    //     })
    // }

    getCtl(devid) {
        return this._ctls.find(item => item.devid === devid)
    }

    // 控制设备
    // control(devid, data) {
    //     const ctl = this._ctls.find(item => item.devid === devid)
    //     if (ctl) {
    //         return new Promise((resolve, reject) => {
    //             ctl.controller.send(data, (err) => {
    //                 if (err) {
    //                     reject(err)
    //                 } else {
    //                     resolve(true)
    //                 }
    //             })
    //         })
    //     } else {
    //         return Promise.reject('not exists')
    //     }
    // }

    // 发送设备消息

    sendDeviceInfo(devid, data) {
        // const controller = this.controllerMap.get(devid);
        const ctl = this._ctls.find(item=>item.devid===devid)
        if (!ctl) {
            return Promise.reject('Device control object does not exist!');
        }
        console.log("已找到控制对象！")
        return new Promise((resolve, reject) => {
            ctl.controller.send(data, (err) => {
                if (err) {
                    console.error('发送消息报错:', err)
                    reject('Failed to send device message!')
                }
                else {
                    resolve(null)
                }
            })
        })
    }


    getDeviceList() {
        return this._list
    }
}

module.exports.devManager = new Dev()