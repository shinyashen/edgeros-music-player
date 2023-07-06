<template>
  <div style="position: relative; width:100%; height: 70%;">
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>    
    <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" color="black"></van-button>
    <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" color="black"></van-button>  
    <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" color="black"></van-button>  
     <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" color="black"></van-button>  
     <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" color="black"></van-button>  
</div>
<div style="position: relative; width:100%; height: 70%;">
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>
    <br>
    <van-button style="width:70%; height:14.28%"></van-button>    
    <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" color="black"></van-button>
    <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" color="black"></van-button>  
    <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" color="black"></van-button>  
     <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" color="black"></van-button>  
     <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" color="black"></van-button>  
</div>
  <van-tabbar v-model="active">
    <van-tabbar-item icon="music-o">弹奏</van-tabbar-item>
    <van-tabbar-item icon="play-circle-o">播放</van-tabbar-item>
  </van-tabbar>
</template>

<script>

import { Button, Tabbar, TabbarItem } from 'vant'
import { ref } from 'vue'
import 'vant/lib/index.css'

export default ({
  components: {
    [Button.name]: Button,
    [Tabbar.name]: Tabbar,
    [TabbarItem.name]: TabbarItem,
  },
  setup() {
    const active = ref(0);
    return { active };
  }
})
</script>


<style lang="less">
html,
body,
#app {
  height: 100%;
  background: linear-gradient(to right, #B2B9BE, #2F4052);
}

.whitekey {
  width: 70%;
  height: 10%;
  color: white;
}

.blackkey {
  position: absolute;
  top: 50%;
  left: 40%;
  width: 30%;
  height: 7%;
  color: black !important;
  transform: translateX(-10%);
}
</style>
