<template>
    <div style="background: linear-gradient(to right, #fc00ff, #00dbde);">
        <van-dropdown-menu class="menu" :overlay=false>
            <van-dropdown-item style="width:70%; left:15%;" v-model="selected_song" :options="song_list" duration="0.2" />
        </van-dropdown-menu>
        <div
            style="position: relative;top:20%;text-align: center; font-size: 40px; font-family:'Alibabapuhuiti';  color: white;">
            <text>{{ selected_song }}</text>
            <br>
            <img :src="cdimg" style="position: relative;top:60%;width: 20%; height: 20%; object-fit: cover;">
        </div>
        <van-button style="display:block;margin:0 auto;
        position: relative;top:25%;" round color="linear-gradient(to right bottom, #00dbde ,#fc00ff)"
            @click="playmsc()">播放/暂停</van-button>
    </div>
</template>

<script>

import { Button, Tabbar, TabbarItem, DropdownMenu, DropdownItem } from 'vant'
import { ref } from 'vue'
import 'vant/lib/index.css'

export default ({
    data() {
        return {
            ifplaying: '0',
            playicon: "pause-circle",
            cdimg: require('../../../assets/cd.svg'),
        }
    },
    components: {
        [Button.name]: Button,
        [Tabbar.name]: Tabbar,
        [TabbarItem.name]: TabbarItem,
        [DropdownMenu.name]: DropdownMenu,
        [DropdownItem.name]: DropdownItem,
    },
    setup() {
        const active = ref(0);
        const selected_song = ref('');
        const song_list = [
            { text: '小蜜蜂', value: '1 小蜜蜂' },
            { text: '有酒今朝醉', value: '2 有酒今朝醉' },
            { text: '33', value: '3' },
        ];
        return {
            active,
            selected_song,
            song_list,
        }
    },
    methods: {
        playmsc() {
            // 一些播放操作
        }
    }

})
</script>


<style>
html,
body {
    height: 100%;
}

.bkgcolor {
    background: linear-gradient(to right, #fc00ff, #00dbde);
}

.menu {
    position: absolute;
    left: 15%;
    top: 10%;
    width: 70%;
    justify-content: center;
    align-items: center;
    border-radius: 10px;
}

.songname {
    position: absolute;
    font-size: 30px;
    font-family: "Alibabapuhuiti";
    color: white;
}

.playkey {
    background: black;
}

.playkey:active {
    background: rgb(80, 80, 80);
}
</style>