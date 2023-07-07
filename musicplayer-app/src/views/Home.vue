<template>
  <div class="bkgcolor1">
    <div style="position: relative; width:100%; height: 70%; text-align: left;">
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('C4')" @mouseup="playkeyend('C4')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">C4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('D4')" @mouseup="playkeyend('D4')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">D4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('E4')" @mouseup="playkeyend('E4')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">E4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('F4')" @mouseup="playkeyend('F4')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">F4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('G4')" @mouseup="playkeyend('G4')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">G4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('A4')" @mouseup="playkeyend('A4')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">A4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('B4')" @mouseup="playkeyend('B4')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">B4</text>

      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" class="blackkey"
      @mousedown="playkeystart('C4#')" @mouseup="playkeyend('C4#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey"
      @mousedown="playkeystart('D4#')" @mouseup="playkeyend('D4#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey"
      @mousedown="playkeystart('F4#')" @mouseup="playkeyend('F4#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey"
      @mousedown="playkeystart('G4#')" @mouseup="playkeyend('G4#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey"
      @mousedown="playkeystart('A4#')" @mouseup="playkeyend('A4#')"></van-button>
    </div>

    <div class="bkgcolor1" style="position: relative; width:100%; height: 70%;">
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('C5')" @mouseup="playkeyend('C5')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">C5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('D5')" @mouseup="playkeyend('D5')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">D5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('E5')" @mouseup="playkeyend('E5')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">E5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('F5')" @mouseup="playkeyend('F5')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">F5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('G5')" @mouseup="playkeyend('G5')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">G5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('A5')" @mouseup="playkeyend('A5')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">A5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  6px 0px 6px rgba(0, 0, 0, 0.4),
      -6px 6px 8px inset rgba(0, 0, 0, 0.2),
      6px 6px 8px inset rgba(0, 0, 0, 0.2);border:none;"
      @mousedown="playkeystart('B5')" @mouseup="playkeyend('B5')"></van-button>
      <text style="position: relative; left:-65%; top:1%; font-family:'Alibabapuhuiti'; 
      font-size: 20px; color: black;">B5</text>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" class="blackkey"
      @mousedown="playkeystart('C5#')" @mouseup="playkeyend('C5#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey"
      @mousedown="playkeystart('D5#')" @mouseup="playkeyend('D5#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey"
      @mousedown="playkeystart('F5#')" @mouseup="playkeyend('F5#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey"
      @mousedown="playkeystart('G5#')" @mouseup="playkeyend('G5#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey"
      @mousedown="playkeystart('A5#')" @mouseup="playkeyend('A5#')"></van-button>
    </div>
  </div>
</template>

<script>

import { Button, Tabbar, TabbarItem } from 'vant'
import { ref } from 'vue'
import axios from 'axios'
import 'vant/lib/index.css'

export default ({
  data(){
    return{
      curkey:'0'
    }
  },
  components: {
    [Button.name]: Button,
    [Tabbar.name]: Tabbar,
    [TabbarItem.name]: TabbarItem,
  },
  setup() {
    const active = ref(0);
    return { active };
  },
  methods:{
    playkeystart:function(keyname){
      console.log('按下'+keyname);
      axios({
        url: "/api/key/down/"+keyname,
        method: 'POST',
      })
    },
    playkeyend:function(keyname){
      console.log("抬起"+keyname);
      axios({
        url: "/api/key/up/"+keyname,
        method: 'POST',
      })
    }
  }
})
</script>


<style>
.bkgcolor1 {
  background: linear-gradient(to right, #B2B9BE, #2F4052);;
}

#app {
  height: 100%;
  background: rgba(0, 0, 0, 0);
}

.whitekey {
  width: 70%;
  height: 10%;
  color: white;
}

.blackkey {
  background:black;
  box-shadow: 6px 6px 4px inset rgb(95 95 95), 
  6px -6px 4px inset rgb(95 95 95), 
  -3px 0px 4px inset rgb(95 95 95), 
  6px 0px 10px rgba(0, 0, 0,0.2);
  border: none;
}

.blackkey:active {
  background: rgb(47, 47, 47);
  box-shadow: 6px 6px 4px inset rgb(95 95 95), 
  6px -6px 4px inset rgb(95 95 95), 
  6px 0px 10px rgba(0, 0, 0,0.2);
  border: none;
}

.l-aligned {
  text-align: left;
  padding-left: 10px;
  padding-right: 10px;
}
</style>
