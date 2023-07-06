<template>
        <van-dropdown-menu class="menu" :overlay=false >
            <van-dropdown-item style="width:50%; left:25%;" 
            v-model="selected_song" :options="song_list" duration="0.2" />
        </van-dropdown-menu>
    <text class="songname">{{ selected_song }}</text>
</template>

<script>

import { Button, Tabbar, TabbarItem, DropdownMenu, DropdownItem } from 'vant'
import { ref } from 'vue'
import 'vant/lib/index.css'

export default ({
    components: {
        [Button.name]: Button,
        [Tabbar.name]: Tabbar,
        [TabbarItem.name]: TabbarItem,
        [DropdownMenu.name]: DropdownMenu,
        [DropdownItem.name]: DropdownItem,
    },
    setup() {
        const active = ref(0);
        const selected_song = ref('11');
        const song_list = [
            { text: '11', value: '11' },
            { text: '22', value: '22' },
            { text: '33', value: '33' },
        ];
        return {
            active,
            selected_song,
            song_list,
        }
    },


})
</script>


<style>
html,
body,
#app {
    height: 100%;
    background: linear-gradient(to right, #B2B9BE, #2F4052);
}

.menu {
    position: absolute; 
    left:25%;
    top:10%;
    width:50%;
    justify-content: center;
    align-items: center;
}

.songname{
    position: absolute; 
    top:25%;
    left:50%;
    text-align:center;
    font-size:30px;
    font-family:"Alibabapuhuiti";
}
</style>