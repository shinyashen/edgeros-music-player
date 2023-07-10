<template>
  <div class="bkgcolor1">
    <div class="bkgcolor1" style="position: relative; width:100%; height: 70%;" v-show="value[0] < 2 && value[1] > 0">
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('C1')"></van-button>
      <text class="textstyle" @click="playkeystart('C1')">C1</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('D1')"></van-button>
      <text class="textstyle" @click="playkeystart('D1')">D1</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('E1')"></van-button>
      <text class="textstyle" @click="playkeystart('E1')">E1</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('F1')"></van-button>
      <text class="textstyle" @click="playkeystart('F1')">F1</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('G1')"></van-button>
      <text class="textstyle" @click="playkeystart('G1')">G1</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('A1')"></van-button>
      <text class="textstyle" @click="playkeystart('A1')">A1</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('B1')"></van-button>
      <text class="textstyle" @click="playkeystart('B1')">B1</text>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" class="blackkey" @click="playkeystart('C1#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey" @click="playkeystart('D1#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey" @click="playkeystart('F1#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey" @click="playkeystart('G1#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey" @click="playkeystart('A1#')"></van-button>
    </div>

    <div class="bkgcolor1" style="position: relative; width:100%; height: 70%;" v-show="value[0] < 3 && value[1] > 1">
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('C2')"></van-button>
      <text class="textstyle" @click="playkeystart('C2')">C2</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('D2')"></van-button>
      <text class="textstyle" @click="playkeystart('D2')">D2</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('E2')"></van-button>
      <text class="textstyle" @click="playkeystart('E2')">E2</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('F2')"></van-button>
      <text class="textstyle" @click="playkeystart('F2')">F2</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('G2')"></van-button>
      <text class="textstyle" @click="playkeystart('G2')">G2</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('A2')"></van-button>
      <text class="textstyle" @click="playkeystart('A2')">A2</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('B2')"></van-button>
      <text class="textstyle" @click="playkeystart('B2')">B2</text>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" class="blackkey" @click="playkeystart('C2#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey" @click="playkeystart('D2#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey" @click="playkeystart('F2#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey" @click="playkeystart('G2#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey" @click="playkeystart('A2#')"></van-button>
    </div>

    <div class="bkgcolor1" style="position: relative; width:100%; height: 70%;" v-show="value[0] < 4 && value[1] > 2">
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('C3')"></van-button>
      <text class="textstyle" @click="playkeystart('C3')">C3</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('D3')"></van-button>
      <text class="textstyle" @click="playkeystart('D3')">D3</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('E3')"></van-button>
      <text class="textstyle" @click="playkeystart('E3')">E3</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('F3')"></van-button>
      <text class="textstyle" @click="playkeystart('F3')">F3</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('G3')"></van-button>
      <text class="textstyle" @click="playkeystart('G3')">G3</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('A3')"></van-button>
      <text class="textstyle" @click="playkeystart('A3')">A3</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('B3')"></van-button>
      <text class="textstyle" @click="playkeystart('B3')">B3</text>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" class="blackkey" @click="playkeystart('C3#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey" @click="playkeystart('D3#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey" @click="playkeystart('F3#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey" @click="playkeystart('G3#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey" @click="playkeystart('A3#')"></van-button>
    </div>

    <div class="bkgcolor1" style="position: relative; width:100%; height: 70%;" v-show="value[0] < 5 && value[1] > 3">
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('C4')"></van-button>
      <text class="textstyle" @click="playkeystart('C4')">C4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('D4')"></van-button>
      <text class="textstyle" @click="playkeystart('D4')">D4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('E4')"></van-button>
      <text class="textstyle" @click="playkeystart('E4')">E4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('F4')"></van-button>
      <text class="textstyle" @click="playkeystart('F4')">F4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('G4')"></van-button>
      <text class="textstyle" @click="playkeystart('G4')">G4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('A4')"></van-button>
      <text class="textstyle" @click="playkeystart('A4')">A4</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('B4')"></van-button>
      <text class="textstyle" @click="playkeystart('B4')">B4</text>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" class="blackkey" @click="playkeystart('C4#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey" @click="playkeystart('D4#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey" @click="playkeystart('F4#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey" @click="playkeystart('G4#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey" @click="playkeystart('A4#')"></van-button>
    </div>

    <div class="bkgcolor1" style="position: relative; width:100%; height: 70%;" v-show="value[0] < 6 && value[1] > 4">
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('C5')"></van-button>
      <text class="textstyle" @click="playkeystart('C5')">C5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('D5')"></van-button>
      <text class="textstyle" @click="playkeystart('D5')">D5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('E5')"></van-button>
      <text class="textstyle" @click="playkeystart('E5')">E5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('F5')"></van-button>
      <text class="textstyle" @click="playkeystart('F5')">F5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('G5')"></van-button>
      <text class="textstyle" @click="playkeystart('G5')">G5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('A5')"></van-button>
      <text class="textstyle" @click="playkeystart('A5')">A5</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('B5')"></van-button>
      <text class="textstyle" @click="playkeystart('B5')">B5</text>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" class="blackkey" @click="playkeystart('C5#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey" @click="playkeystart('D5#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey" @click="playkeystart('F5#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey" @click="playkeystart('G5#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey" @click="playkeystart('A5#')"></van-button>
    </div>

    <div class="bkgcolor1" style="position: relative; width:100%; height: 70%;" v-show="value[0] < 7 && value[1] > 5">
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('C6')"></van-button>
      <text class="textstyle" @click="playkeystart('C6')">C6</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('D6')"></van-button>
      <text class="textstyle" @click="playkeystart('D6')">D6</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('E6')"></van-button>
      <text class="textstyle" @click="playkeystart('E6')">E6</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('F6')"></van-button>
      <text class="textstyle" @click="playkeystart('F6')">F6</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('G6')"></van-button>
      <text class="textstyle" @click="playkeystart('G6')">G6</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('A6')"></van-button>
      <text class="textstyle" @click="playkeystart('A6')">A6</text>
      <br>
      <van-button style="width:70%; height:14.28%; 
      box-shadow:  rgba(0, 0, 0, 0.4) 6px 0px 6px, 
      rgba(0, 0, 0, 0.2) 0px 0px 8px inset, rgba(0, 0, 0, 0.2) 6px 0px 8px inset
      ;border:none;" @click="playkeystart('B6')"></van-button>
      <text class="textstyle" @click="playkeystart('B6')">B6</text>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 9%;" class="blackkey" @click="playkeystart('C6#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 24%;" class="blackkey" @click="playkeystart('D6#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 52%;" class="blackkey" @click="playkeystart('F6#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 66%;" class="blackkey" @click="playkeystart('G6#')"></van-button>
      <van-button style="width:40%; height:10%; 
    position: absolute; left: 30%; top: 81%;" class="blackkey" @click="playkeystart('A6#')"></van-button>
    </div>

    <div>
      <!--to right, #868f96,#596164-->
      <van-button type="primary" style="position: fixed; left:80%;top:6%;
      transform:rotate(90deg);background:linear-gradient(to right, #e52d27, #b31217);
      border: none;font-family: Alibabapuhuiti;" round @click="setrecstatus">
        <van-icon class="iconfont" v-show="!ifrecing" class-prefix='icon' name='luyin' />
        <van-icon v-show="ifrecing" name='stop-circle-o' />
        {{ recword }}
      </van-button>
      <van-button type="primary" style="position: fixed; left:80%;top:18%;
      transform:rotate(90deg);background:linear-gradient(to right, #ff512f, #f09819);
      border: none;font-family: Alibabapuhuiti;" round @click="playrec">
        <van-icon name='play-circle-o' /> 播放
      </van-button>
      <van-button type="primary" style="position: fixed; left:80%;top:30%;
      transform:rotate(90deg);background:linear-gradient(to right, #eb3349, #f45c43);
      border: none;font-family: Alibabapuhuiti;" round @click="delrec">
        <van-icon name='delete-o' /> 删除
      </van-button>
      <van-slider v-model="value" style="position: fixed;left:87%;top:42%;height:35%;" vertical range
        active-color="#f45c43" step="1" max="6" min="1" @change="onChange" />
    </div>
  </div>
</template>

<script>

import { Button, Tabbar, TabbarItem, FloatingBubble, Icon, showDialog, Slider,Dialog,showNotify, closeNotify  } from 'vant'
import { ref } from 'vue'
import axios from 'axios'
import '../assets/iconfont.css'
import 'vant/lib/index.css'
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

export default ({
  data() {
    return {
      curkey: '0',
      frequency: {
        'D4': 294, 'D4#': 311,
        'E4': 330, 'F4': 349,
        'C4': 262, 'C4#': 277,
        'F4#': 370, 'G4': 392,
        'G4#': 415, 'A4': 440,
        'A4#': 466, 'B4': 494,
        'C5': 523, 'C5#': 554,
        'D5': 587, 'D5#': 622,
        'E5': 659, 'F5': 698,
        'F5#': 740, 'G5': 784,
        'G5#': 831, 'A5': 880,
        'A5#': 932, 'B5': 988,
        'C1': 33, 'C3': 131,
        'C1#': 35, 'C3#': 139,
        'D1': 37, 'D3': 147,
        'D1#': 39, 'D3#': 156,
        'E1': 41, 'E3': 165,
        'F1': 44, 'F3': 175,
        'F1#': 46, 'F3#': 185,
        'G1': 49, 'G3': 196,
        'G1#': 52, 'G3#': 208,
        'A1': 55, 'A3': 220,
        'A1#': 58, 'A3#': 233,
        'B1': 62, 'B3': 247,
        'C2': 65, 'C6': 1047,
        'C2#': 69, 'C6#': 1109,
        'D2': 73, 'D6': 1175,
        'D2#': 78, 'D6#': 1245,
        'E2': 82, 'E6': 1319,
        'F2': 87, 'F6': 1397,
        'F2#': 92, 'F6#': 1480,
        'G2': 98, 'G6': 1568,
        'G2#': 104, 'G6#': 1661,
        'A2': 110, 'A6': 1760,
        'A2#': 117, 'A6#': 1865,
        'B2': 123, 'B6': 1976,
      },
      recordData: [],
      ifrecing: false,
      ifhasrec: false,
      recword: '录音',
      recordicon: require('../assets/recored_icon.svg'),
      showDialog: true,
    }
  },
  mounted() {
    const storedRec = localStorage.getItem('recordData');
    if (storedRec) {
      this.items = JSON.parse(storedRec);
    }
  },
  components: {
    [Button.name]: Button,
    [Tabbar.name]: Tabbar,
    [TabbarItem.name]: TabbarItem,
    [FloatingBubble.name]: FloatingBubble,
    [Icon.name]: Icon,
    [Slider.name]: Slider,
    [Dialog .name]: Dialog ,
  },
  setup() {
    const active = ref(0);
    const value = ref([4, 5]);
    const onChange = (value);
    return { active, value, onChange };
  },
  /*   created(){
      const tempdata1=localStorage.getItem('recordData');
      if(tempdata1.length>2){
        this.ifhasrec=true;
        localStorage.setItem('recordData', JSON.stringify(this.recordData));
      }else{
        this.ifhasrec=false;
      }
    }, */
  methods: {
    playkeystart: function (keyname) {
      console.log('按下' + keyname);
      if (this.ifrecing) {
        this.recordData.push(keyname);
        localStorage.setItem('recordData', JSON.stringify(this.recordData));
      }
      const data = {
        method: 'set',
        freq: this.frequency[keyname]
      }
      const devid = "nw.b0b21cfe804ec940";
      console.log('data:', data)
      axios.post('/api/key', {
        devid,
        data
      })
    },
    playkeyend: function (keyname) {
      console.log("抬起" + keyname);
      const data = {
        method: 'set',
        freq: 0
      }
      const devid = "nw.b0b21cfe804ec940";
      console.log('data:', data)
      axios.post('/api/key', {
        devid,
        data
      })
    },
    setrecstatus() {
      if (this.ifrecing) {
        this.ifrecing = false;
        this.recword = '录音';
        this.ifhasrec = true;
      } else {
        this.recordData = [];
        localStorage.setItem('recordData', JSON.stringify(this.recordData));
        this.ifrecing = true;
        this.recword = '停止';
      }
    },
    playrec() {
      if (this.ifrecing == false) {
        const tempdata = [];
        this.tempdata = localStorage.getItem('recordData');
        this.recordData = JSON.parse(this.tempdata);
        if (this.recordData.length == 0) {
          showDialog({
            message: '没有可播放的录音！',
          });
        } else {
          this.for_play();
        }
        console.log("temp", this.recordData);
      }
    },
    async for_play() {
      for (let index = 0; index < this.recordData.length; index++) {
        const element = this.recordData[index];
        console.log("dangqian", element);
        const data = {
          method: 'set',
          freq: this.frequency[element]
        }
        await this.sleep(500);
        const devid = "nw.b0b21cfe804ec940";
        console.log('data:', data)
        axios.post('/api/key', {
          devid,
          data
        });
      }
    },
    sleep(ms) {
      return new Promise(resolve => setTimeout(resolve, ms));
    },
    delrec() {
      if (this.recordData.length == 0) {
        showDialog({
          message: '没有可删除的录音！',
        });
      } else {
        this.recordData = [];
        this.ifhasrec = false;
        localStorage.setItem('recordData', JSON.stringify(this.recordData));
      }
    },
  }
})
</script>


<style>
.bkgcolor1 {
  background: linear-gradient(to right, #232526, #444546);
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
  background: black;
  box-shadow: 6px 6px 4px inset rgb(95 95 95),
    6px -6px 4px inset rgb(95 95 95),
    -3px 0px 4px inset rgb(95 95 95),
    6px 0px 10px rgba(0, 0, 0, 0.2);
  border: none;
}

.blackkey:active {
  background: rgb(47, 47, 47);
  box-shadow: 8px 6px 4px inset rgb(95 95 95),
    8px -6px 4px inset rgb(95 95 95),
    6px 0px 10px rgba(0, 0, 0, 0.2);
  border: none;
}

.l-aligned {
  text-align: left;
  padding-left: 10px;
  padding-right: 10px;
}

.van-floating-bubble {
  position: fixed;
  left: -3%;
  top: -80%;
  right: var(--van-floating-bubble-initial-gap);
  bottom: var(--van-floating-bubble-initial-gap);
  width: var(--van-floating-bubble-size);
  height: var(--van-floating-bubble-size);
  box-sizing: border-box;
  display: flex;
  justify-content: center;
  align-items: center;
  overflow: hidden;
  cursor: pointer;
  -webkit-user-select: none;
  -moz-user-select: none;
  user-select: none;
  touch-action: none;
  color: black;
  background: linear-gradient(to right, #8e9eab, #eef2f3);
  border-radius: var(--van-radius-max);
  z-index: var(--van-floating-bubble-z-index);
  transition: transform .3s;
}

.textstyle {
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  position: relative;
  left: -65%;
  top: 1%;
  font-family: 'Alibabapuhuiti';
  font-size: 20px;
  color: black;
  display: inline-block;
  transform: rotate(90deg);
}

.textstyle p {
  transform: rotate(45deg);
}

</style>

<style>
.van-dialog {
  transform: rotate(90deg);
}
</style> 