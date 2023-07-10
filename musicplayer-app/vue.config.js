module.exports = {
    assetsDir: "static",
    productionSourceMap: false,
  
    devServer: {
      disableHostCheck: true,
      proxy: {
        "/": {
          target: "https://192.168.128.1:7374",
          changeOrigin: true,
          secure: false,
        },
      },
    },
  };
  