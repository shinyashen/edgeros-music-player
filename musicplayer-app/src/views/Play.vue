<template>
    <div style="background: linear-gradient(to right, #fc00ff, #00dbde);">
        <van-dropdown-menu style="font-family:'Alibabapuhuiti';" class="menu" :overlay=false>
            <van-dropdown-item style="width:70%; left:15%; font-family:'Alibabapuhuiti';
            z-index: 999;" v-model="selected_song" :options="song_list" duration="0.2" />
        </van-dropdown-menu>
        <div style="position: relative;height:90%;top:15%;left:0%;
        text-align: center; font-size: 40px; font-family:'Alibabapuhuiti';  color: white;">
            <text style="position:absolute;top:10%;left:0%;right:0%;text-align:center;">{{ selected_song }}</text>
            <br>
            <img :src="cdbottom" class="image" :style="animationState">
            <van-button style="display:block;margin:0 auto;font-family:'Alibabapuhuiti';
        position: relative;top:13%;" round color="linear-gradient(to right bottom, #00dbde ,#fc00ff)"
                @click="startplaystatus(); playmsc();" icon="play-circle-o">播放</van-button>
        </div>
    </div>
</template>

<script>

import { Button, Tabbar, TabbarItem, DropdownMenu, DropdownItem, Popup, showDialog,showNotify, closeNotify } from 'vant'
import { ref } from 'vue'
import 'vant/lib/index.css'
import axios from 'axios'
import io from '../assets/socket_io'


const socket = io()
socket.on('connect', () => {
    console.log('connect success!')
    socket.emit('cmsg', "123")
})
socket.on('lost', (data) => {
    console.log("lost data:", data)
    showNotify({ type: 'danger', message: '设备已掉线' });
    console.log("lost ifplaying:", this.ifplaying);
    console.log("lost ifoffline:", this.ifoffline);
})

socket.on('join', (data) => {
    console.log("join data:", data)
    showNotify({ type: 'success', message: '设备已上线' });
})

/*
function startplaystatus() {
    this.ifplaying = true;
    console.log("startplaystatus", this.ifplaying);
}
function endplaystatus() {
    this.ifplaying = false;
    console.log("endplaystatus", this.ifplaying);
}*/


export default ({
    data() {
        return {
            playicon: "pause-circle",
            cdbottom: require('../../../assets/cdbottom.svg'),
            ifplaying: false,
            ifoffline: false,
        }
    },
    components: {
        [Button.name]: Button,
        [Tabbar.name]: Tabbar,
        [TabbarItem.name]: TabbarItem,
        [DropdownMenu.name]: DropdownMenu,
        [DropdownItem.name]: DropdownItem,
        [Popup.name]: Popup,
    },
    computed: {
        // 根据isplay计算播放状态
        state() {
            if (this.ifplaying) {
                return 'running'
            } else {
                return 'paused'
            }
        },
        // 根据状态决定是否播放
        animationState() {
            return {
                animationPlayState: this.state
            }
        },

    },
    setup() {
        const active = ref(0);
        const selected_song = ref('1 小蜜蜂');
        const song_list = [
            { text: '小蜜蜂', value: '1 小蜜蜂' },
            { text: '蜜雪冰城主题曲', value: '2 蜜雪冰城主题曲' },
            { text: '晴天', value: '3 晴天' },
            { text: '原神', value: '4 原神' },
            { text: '大鱼', value: '5 大鱼' },
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
            console.log('播放' + this.selected_song);
            const data = {
                method: 'set',
                song: parseInt(this.selected_song[0])
            }
            const devid = "nw.b0b21cfe804ec940";
            console.log('data:', data)
            const res = axios.post('/api/play', {
                devid,
                data
            });
            console.log('res:', res)
            const socket = io()
            socket.on('smsg', (data) => {
                console.log("smsg:", data)
                console.log("data.data.micro_state:", data.data.micro_state)
                if (data.data.micro_state === 'END') {
                    this.endplaystatus();
                }
            })
            // socket.on('lost', (data)=>{
            //     console.log("lost data:", data)
            //     this.endplaystatus()
            // })
        },
        // offonline() {
        //     const socket = io()
        //     socket.on('lost', (data) => {
        //         console.log("lost data:", data)
        //         this.endplaystatus();
        //         this.ifoffline = true;
        //     })
        //     socket.on('join', (data) => {
        //         console.log("join data:", data)
        //         this.ifoffline = false;
        //         showToast("设备已上线");
        //     })

        // },
        startplaystatus() {
            this.ifplaying = true;
        },
        endplaystatus() {
            this.ifplaying = false;
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

.image {
    position: relative;
    top: 13%;
    max-height: 50%;
    max-width: 60%;
    animation: rotateImg 10s linear infinite;
}


@keyframes rotateImg {
    from {
        transform: rotate(0deg);
    }

    to {
        transform: rotate(360deg);
    }
}
</style>