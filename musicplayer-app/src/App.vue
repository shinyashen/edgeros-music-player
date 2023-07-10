<template>
  <router-view style="height:100%"></router-view>
  <van-button type="primary" style="z-index: 1;position: fixed;top:93%;left: 86%;
  background: none;border: none;color:rgba(0, 0, 0, 0.644);font-size: 20px;" icon="expand-o" @click="iftbarvis">
  </van-button>
    <van-tabbar route v-show="tbarvisible" style="z-index: 0;">
      <van-tabbar-item to="/home" icon="music-o" style="font-family:'Alibabapuhuiti';">弹奏</van-tabbar-item>
      <van-tabbar-item to="/play" icon="play-circle-o" style="font-family:'Alibabapuhuiti';">播放</van-tabbar-item>
    </van-tabbar>
</template>

<script>

import { Button, Tabbar, TabbarItem,showDialog } from 'vant'
import { ref } from 'vue'
import 'vant/lib/index.css'
import './socket_io'


export default ({
  components: {
    [Tabbar.name]: Tabbar,
    [TabbarItem.name]: TabbarItem,
    [Button.name]: Button,
  },
  data() {
    return {
      tbarvisible: true,
    }
  },
  setup() {
    const active = ref(0);
    return { active };
  },
  methods: {
    iftbarvis() {
      if (this.tbarvisible) {
        this.tbarvisible = false;
      } else {
        this.tbarvisible = true;
      }
    }
  }
})
</script>

<style></style>