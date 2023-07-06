<template>
  <router-view></router-view>
  <van-tabbar route>
    <van-tabbar-item to="/home" icon="music-o">弹奏</van-tabbar-item>
    <van-tabbar-item to="/play" icon="play-circle-o">播放</van-tabbar-item>
  </van-tabbar>
</template>

<script>

import { Button, Tabbar, TabbarItem } from 'vant'
import { ref } from 'vue'
import 'vant/lib/index.css'

export default ({
  components: {
    [Tabbar.name]: Tabbar,
    [TabbarItem.name]: TabbarItem,
  },
  setup() {
    const active = ref(0);
    return { active };
  }
})
</script>

