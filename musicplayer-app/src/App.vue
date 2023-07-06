<template>
  <div style="position: relative; width:100%; height: 20%;">
    <van-button style="width:70%; height:50%"></van-button>
    <br>
    <van-button style="width:70%; height:100%"></van-button>
    <br>
    <van-button style="width:40%; height:50%; position: absolute; left: 30%; top: 25%;" color="black"></van-button>
  </div>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
  <br>
  <van-button class="whitekey"></van-button>
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
