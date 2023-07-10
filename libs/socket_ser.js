const Socket = require('socket.io')

let io

module.exports.init = (app) => {
    io = new Socket(app.server, { allowUpgrades: true })
    io.on('connection', function (socket) {
        // console.log('socket:',socket)
        console.log(`客户端: ${socket.id} connected`)
        socket.on('cmsg', (data) => {
            console.log('来自客户端的数据：', data)
        })
    })
}

module.exports.emitMsg = (event, data) => {
    if (io) {
        console.log('emit_data:',data)
        io.sockets.emit(event, data)
    }
}