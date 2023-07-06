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
    position: absolute; left: 30%; top: 9%;" class="blackkey"></van-button>
        <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey"></van-button>
        <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey"></van-button>
        <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey"></van-button>
        <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey"></van-button>
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
    position: absolute; left: 30%; top: 9%;" class="blackkey"></van-button>
        <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey"></van-button>
        <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey"></van-button>
        <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey"></van-button>
        <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey"></van-button>
    </div>
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


<style>
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

.blackkey{
  background: black;
}

.blackkey:active{
  background: rgb(80, 80, 80);
}
</style>
