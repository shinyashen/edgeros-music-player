/*
 * 无源蜂鸣器接D4--GPIO4
 * 命令示例：
{
  "method": "set",
  "freq": 2000
}

{
  "method": "set",
  "note": 125
}

{
  "method": "set",
  "song": 1
}
*/

#include "Arduino.h"
#include <OneButton.h>
#include <WiFi.h>
#include <SDDC_SDK_lib.h>
#include <cJSON.h>
#include <Wire.h>

#define SDDC_CFG_PORT 680U  // SDDC 协议使用的端口号
#define PIN_INPUT 4         // 选择 IO0 进行控制

#define ESP_TASK_STACK_SIZE 4096
#define ESP_TASK_PRIO 25

static const int sensor_in = 4;  // 数据输入引脚

#define buzzer (4)
int freq = 0;        //设置频率
int channel = 0;     //通道号，取值0 ~ 15
int resolution = 8;  //计数位数，2的8次幂=256
int Buzzer = 4;

// C3-
#define G3 196
#define A3 221
#define B3 248

// C4-
#define C4 262
#define CS4 277
#define D4 294
#define DS4 311
#define E4 330
#define F4 349
#define FS4 370
#define G4 392
#define GS4 415
#define A4 440
#define AS4 466
#define B4 494

// C5-
#define C5 523
#define CS5 554
#define D5 587
#define DS5 622
#define E5 659
#define F5 698
#define FS5 740
#define G5 784
#define GS5 831
#define A5 880
#define AS5 932
#define B5 988

// C6-
#define C6 1046
#define CS6 1109
#define E6 1318
#define F6 1397
#define G6 1568
#define A6 1760
#define B6 1976

#define rest 0 // 休止符

int note = 1500;
int song = 0;

OneButton button(PIN_INPUT, true);

// 单词获取数据
sddc_bool_t get_sensor_state(char *objvalue, int value_len)
{

    strncpy(objvalue, "END", value_len); 
    return SDDC_TRUE;
}

// 主动数据上报函数
static void report_sensor_state()
{
    int sensorValue = 0;
    cJSON *value;
    cJSON *root;
    char  *msg;

    value = cJSON_CreateArray();
    root = cJSON_CreateObject();
    sddc_return_if_fail(value);
    sddc_return_if_fail(root);

    sddc_return_if_fail(value);

    // 获取传感器数据
    cJSON_AddItemToArray(value, cJSON_CreateString("micro_state")); // 这里的字符串要和系统对象状态获取注册结构体里的对应
    cJSON_AddItemToObject(root, "obj", value);

    // 发送数据给 EdgerOS
    msg = cJSON_Print(root);
    sddc_printf("主动上报: %s\n",msg);
    object_report(root);

    cJSON_Delete(value);
    cJSON_free(msg);
}

static void play_music1(void *arc) 
{
  // 1. 小蜜蜂
  // 频谱
  int music1[] = {
    G5, E5, E5, rest,
    F5, D5, D5, rest,
    C5, D5, E5, F5,
    G5, G5, G5, rest,
    G5, E5, E5, E5,
    F5, D5, D5, D5,
    C5, E5, G5, G5,
    E5, E5, C5, rest,
    D5, D5, D5, D5,
    D5, E5, F5, rest,
    E5, E5, E5, E5,
    E5, F5, G5, rest,
    G5, E5, E5, E5,
    F5, D5, D5, D5,
    C5, E5, G5, G5,
    E5, E5, C5, rest
  };
  // 节拍
  int music1_delay[] = {
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1
  };
  while (true) {
    for (int i = 0; i < (sizeof(music1) / sizeof(music1[0])); i++) {
      tone(Buzzer, music1[i]);  // 驱动蜂鸣器
      delay(500); // 节拍实现
      noTone(Buzzer); // 关闭蜂鸣器
    }
    ledcWriteTone(channel, 0);
    Serial.println("music1结束");
    report_sensor_state();
    vTaskDelay(500); // 等待500ms
    vTaskDelete(NULL);
  }


}

static void play_music2(void *arc)
{
  // 2. 蜜雪冰城
  // 频谱
  int music2[] = {
    G4, C5, D5,
    E5, G5, G5, A5, G5, E5, D5, C5, C5, D5,
    E5, E5, D5, C5, D5, rest, D5, C5,
    E5, G5, G5, A5, G5, E5, D5, C5, C5, D5,
    E5, E5, D5, D5, C5, rest,
    F5, F5, G5, A5, A5,
    G5, G5, E5, C5, D5, rest, C5, D5,
    E5, G5, G5, A5, G5, E5, D5, C5, C5, D5,
    E5, E5, D5, D5, C5, C5
  };
  // 节拍
  float music2_delay[] = {
    0.5, 0.25, 0.25,
    0.5, 0.5, 0.75, 0.25, 0.5, 0.25, 0.25, 0.5, 0.25, 0.25,
    0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.25, 0.25,
    0.5, 0.5, 0.75, 0.25, 0.5, 0.25, 0.25, 0.5, 0.25, 0.25,
    0.5, 0.5, 0.5, 0.5, 1, 1,
    1, 0.5, 0.5, 1, 1,
    0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.25, 0.25,
    0.5, 0.5, 0.5, 0.5, 0.5, 0.25, 0.25, 0.5, 0.25, 0.25,
    0.5, 0.5, 0.5, 0.25, 0.25, 1
  };
  while (true) {
    for (int i = 0; i < (sizeof(music2) / sizeof(music2[0])); i++) {
      tone(Buzzer, music2[i]);       //驱动蜂鸣器
      delay(music2_delay[i] * 500);  //节拍实现
      noTone(Buzzer);                //停止蜂鸣器
    }
    ledcWriteTone(channel, 0);
    Serial.println("music2结束");
    report_sensor_state();
    vTaskDelay(500);
    vTaskDelete(NULL);
  }

}

void singing(int arr[],int size1)
{
  int freq1[] = {131, 147, 165, 175, 196, 220, 247,262, 294, 330, 349, 370, 392, 411, 440, 494, 523, 587, 659, 698, 784, 880, 988};
  // 这里从左往右对应低音中音高音7个音以及中音中4与5之间的半音，5与6之间的半音的频率
  for(int i = 0; i < size1; i++){
    delay(50);
    tone(Buzzer, freq1[arr[i]]);  //驱动蜂鸣器
    delay(500);                   //节拍实现
    noTone(Buzzer);               //关闭蜂鸣器
  }
}

static void play_music3(void *arc)
{
  // 3. 晴天
  int freq1[] = {131, 147, 165, 175, 196, 220, 247,262, 294, 330, 349,370, 392,411, 440, 494,523, 587, 659, 698, 784, 880, 988};
  int qianzou[] = {5, 7, 12, 7, 3, 7, 12, 7, 5,7,12,7,0,12,6,7};
  // 这些不是对应的简谱的音阶，而是对应的音阶在freq数组里的序号
  int part1[]={12,12,7,7,8,9};
  int part2[]={12,12,7,7,8,9,8,7,4};
  int part3[]={12,12,7,7,8,9};
  int part4[]={9,10,9,8,10,9,8,7};
  int part5[]={4,7,8,9,10,9,8,7};
  int part6[]={8,9,9,9,9,8,9,8,7,15};
  int part7[]={7,7,7,7,7,6,7,7};
  int part8[]={7,7,7,6,7,7};
  int part9[]={7,7,7,12,12,12};
  int part10[]={12,12,12,12,12,12};
  int part11[]={12,12,12,12,10,9};
  int part12[]={7,7,7,7,5,6,7,12,10,9,7,7};
  int part13[]={7,7,7,7,9,7,5,6,7,12,10,9,7,8};
  int part14[]={9,8,10,9};
  int part15[]={7,12,15,16,15,12,7};
  int part17[]={7,14,14};
  int part18[]={14,12,12};
  int part19[]={12,10,9,8,9,10,9};
  int part20[]={9,11,13,9};
  int part21[]={10,12,15,17,15,16,16};
  int part22[]={16,16,12,12,14,12,10,8,9,10,12,14,7,14,15,15};
  int part23[]={16,16,12,12,14,12,10,5,6,7,8,9,8,9,7}; 
  while (true) {
      delay(1000);
      singing(qianzou,16);
      singing(qianzou,16);
      ledcWriteTone(channel,0);
      delay(500);
      singing(part1,6);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part2,9);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part3,6);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part4,8);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part5,8);
      singing(part6,9);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part5,8);
      singing(part6,9);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part7,8);
      singing(part8,6);
      singing(part8,6);
      singing(part9,6);
      singing(part10,6);
      singing(part11,6);
      delay(500);
      ledcWriteTone(channel,0);
      delay(1000);

      singing(part12,12);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part13,14);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part14,4);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part15,7);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part17,3);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part18,3);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part19,7);
      ledcWriteTone(channel,0);
      delay(1000);

      singing(part20,4);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part21,7);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part22,16);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part14,4);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part15,7);
      ledcWriteTone(channel,0);
      delay(500);


      singing(part17,3);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part18,3);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part19,7);
      ledcWriteTone(channel,0);
      delay(1000);

      singing(part20,4);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part21,7);
      ledcWriteTone(channel,0);
      delay(500);

      singing(part23,13);
      ledcWriteTone(channel,0);
      delay(500);
      ledcWriteTone(channel, freq1[9]);
      delay(500);
      ledcWriteTone(channel, freq1[7]);
      delay(800);

      ledcWriteTone(channel,0);
      delay(1000);
      Serial.println("music3结束");
      report_sensor_state();
      vTaskDelay(500); //等待0.5s
      vTaskDelete(NULL);
  }

}

static void play_music4(void *arc)
{
  // 4. 原神
  // 频谱
  int music4[] = {
    D4,
    G4, rest, A4, B4,
    CS5, rest, D5, CS5, B4, A4,
    B4, rest, A4, G4,
    A4, E4, rest,
    G4, rest, G4, A4,
    FS4, E4, D4,
    E4, B4,
    rest, D4,
    G4, rest, A4, B4,
    CS5, rest, D5, CS5, B4, A4,
    B4, rest, A4, G4,
    A4, E4, rest,
    G4, rest, G4, A4,
    FS4, E4, D4,
    E4,
    rest, B4, CS5,
    D5, rest, D5, E5,
    CS5, B4, A4,
    rest, B4, FS5,
    CS5, D5, CS5, B4, A4,
    B4, rest, A4, G4,
    FS4, G4, FS4, E4, D4,
    E4, B4,
    rest, B4, CS5,
    D5, rest, D5, E5,
    CS5, B4, A4,
    rest, B4, FS5,
    CS5, D5, CS5, B4, A4,
    B4, rest, A4, G4,
    FS4, G4, FS4, E4, D4,
    E4
  };
  // 节拍
  float music4_delay[] = {
    1,
    1, 1, 0.5, 0.5,
    1, 0.5, 0.25, 0.25, 0.5, 0.5,
    1, 1, 0.5, 0.5,
    1, 1, 1,
    1, 1, 0.5, 0.5,
    1, 1, 1,
    1, 2,
    2, 1,
    1, 1, 0.5, 0.5,
    1, 0.5, 0.25, 0.25, 0.5, 0.5,
    1, 1, 0.5, 0.5,
    1, 1, 1,
    1, 1, 0.5, 0.5,
    1, 1, 1,
    3,
    2, 0.5, 0.5,
    1, 1, 0.5, 0.5,
    1, 1, 1,
    1, 1, 1,
    0.5, 0.25, 0.25, 1, 1,
    1, 1, 0.5, 0.5,
    0.5, 0.25, 0.25, 1, 1,
    1, 2,
    2, 0.5, 0.5,
    1, 1, 0.5, 0.5,
    1, 1, 1,
    1, 1, 1,
    0.5, 0.25, 0.25, 1, 1,
    1, 1, 0.5, 0.5,
    0.5, 0.25, 0.25, 1, 1,
    3
  };
  while (true) {
    for (int i = 0; i < (sizeof(music4) / sizeof(music4[0])); i++) {
      tone(Buzzer, music4[i]);       // 驱动蜂鸣器
      delay(700 * music4_delay[i]);  // 节拍实现
      noTone(Buzzer);                 // 关闭蜂鸣器
    }
    ledcWriteTone(channel, 0);
    Serial.println("music4结束");
    report_sensor_state();
    vTaskDelay(500);
    vTaskDelete(NULL);
  }
}

static void play_music5(void *arc)
{
  // 5. 大鱼
  // 频谱
  int music5[]={
    E4,D4,E4,A4,E4,D4,E4,B4,
    E4,D4,E4,C5,B4,G4,
    E4,D4,E4,A4,E4,D4,E4,B4,
    G4,D4,B3,
    E4,D4,E4,A4,E4,D4,E4,B4,
    E4,D4,E4,C5,B4,G4,
    D4,E4,A3,D4,E4,A3,G3,
    A3,C4,B3,

    A3,C4,C4,D4,D4,E4,E4,G4,A4,
    G4,E4,D4,
    A3,C4,C4,D4,D4,E4,E4,A3,G3,
    A3,C4,C4,D4,D4,E4,E4,G4,A4,
    G4,E4,D4,
    D4,E4,A3,D4,E4,A3,G3,A3,

    A3,C4,D4,C4,A3,
    A3,C4,D4,C4,E4,
    E4,G4,A4,A4,G4,E4,D4,C4,D4,E4,
    A3,C4,D4,C4,A3,
    A3,C4,D4,C4,E4,
    D4,E4,A3,D4,E4,A3,G3,A3,

    E4,G4,C5,B4,E4,
    E4,D4,C4,C4,D4,E4,
    E4,D4,C4,A4,C5,B4,A4,G4,D4,E4,
    E4,G4,C5,B4,E4,
    E4,D4,C4,C4,D4,E4,
    D4,E4,A3,D4,E4,A3,G3,A3,
  };
  // 节拍
  int music5_delay[]={
    250,250,250,250,250,250,250,250,
    250,250,250,250,500,500,
    250,250,250,250,250,250,250,250,
    500,500,1000,
    250,250,250,250,250,250,250,250,
    250,250,250,250,500,500,
    250,250,500,250,250,250,250,500,500,1000,

    250,250,250,250,250,250,250,125,125,
    750,250,1000,
    250,250,250,250,250,250,500,500,1500,
    250,250,250,250,250,250,250,125,125,
    750,250,1000,
    250,250,500,250,250,250,250,1500,

    250,250,750,250,500,250,250,
    750,250,500,250,250,500,250,250,250,250,500,500,1000,
    250,250,875,125,500,250,250,500,500,1000,
    250,250,500,250,250,250,250,1500,

    250,250,750,250,500,250,250,
    500,250,250,500,250,250,500,250,250,250,250,250,250,1500,
    250,250,750,250,500,250,250,
    500,250,250,1000,250,250,500,250,250,250,250,2000,
  };
  while(true) {
    for (int i = 0; i < (sizeof(music5) / sizeof(music5[0])); i++) {
      tone(Buzzer, music5[i]); // 驱动蜂鸣器
      delay(music5_delay[i]); // 节拍实现
      noTone(Buzzer); // 关闭蜂鸣器
    }
    ledcWriteTone(channel, 0);
    Serial.println("music5结束");
    report_sensor_state();
    vTaskDelay(500); // 等待0.5s
    vTaskDelete(NULL);
  }
}

// 播放歌曲的回调函数
sddc_bool_t song_play(const uint64_t value) {
  Serial.println("歌曲编号：");
  Serial.println(value);
  if (value == 1) {
    xTaskCreate(play_music1, "song1", ESP_TASK_STACK_SIZE, NULL, ESP_TASK_PRIO, NULL);
  } else if (value == 2) {
    xTaskCreate(play_music2, "song2", ESP_TASK_STACK_SIZE, NULL, ESP_TASK_PRIO, NULL);
  } else if (value == 3) {
    xTaskCreate(play_music3, "song3", ESP_TASK_STACK_SIZE, NULL, ESP_TASK_PRIO, NULL);
  } else if (value == 4) {
    xTaskCreate(play_music4, "song4", ESP_TASK_STACK_SIZE, NULL, ESP_TASK_PRIO, NULL);
  } else if (value == 5) {
    xTaskCreate(play_music5, "song5", ESP_TASK_STACK_SIZE, NULL, ESP_TASK_PRIO, NULL);
  }
  return SDDC_TRUE;
}

// 设置频率的回调函数
sddc_bool_t freq_set(const uint64_t value) {
  Serial.println("设置频率:");
  Serial.println(value);
  freq = value;
  tone(Buzzer, freq);
  delay(500);
  noTone(Buzzer);
  Serial.println("已播放");
  return SDDC_TRUE;
}

// 设置占空比的回调函数
sddc_bool_t frequency_set(const uint64_t value) {
  Serial.println("设置占空比:");
  Serial.println(value);
  note = value;
  ledcWrite(channel, value);
  return SDDC_TRUE;
}

// 数字量设备对象函数与处理方法注册
NUM_DEV_REGINFO num_dev[] = {
  { "song", song_play },
  { "freq", freq_set },
  { "note", frequency_set }
};

// 显示设备对象函数与处理方法注册
DIS_DEV_REGINFO dis_dev[] = {};

// IO设备对象设置函数与处理方法注册
IO_DEV_REGINFO io_dev[] = {};

// 系统对象状态获取注册
DEV_STATE_GET dev_state_get_reg[] = {
  {"micro_state",  DEV_IO_TYPE,  get_sensor_state},
};

// 当前设备的信息定义
DEV_INFO dev_info = {
  .name = "红外接近传感器",
  .type = "device.hwjj",
  .excl = SDDC_FALSE,
  .desc = "ESP-32S",
  .model = "IDHWJJ01B",
  .vendor = "inspiration-desktop",
};

// 系统注册对象汇聚
SDDC_CONFIG_INFO sys_cfg = {
  .token = "1234567890",  // 设备密码
  .devinfo = &dev_info,
  .io_dev_reg = io_dev,
  .io_dev_reg_num = ARRAY_SIZE(io_dev),
  .num_dev_reg = num_dev,
  .num_dev_reg_num = ARRAY_SIZE(num_dev),
  .state_get_reg = dev_state_get_reg,
  .state_get_reg_num = ARRAY_SIZE(dev_state_get_reg),
  .dis_dev_reg = dis_dev,
  .dis_dev_num = ARRAY_SIZE(dis_dev),
};

// IO0 按键检测任务
static void esp_io0_key_task() {
  WiFi.disconnect();
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("WIFI Wait for Smartconfig");

    // 设置为Station模式
    WiFi.mode(WIFI_STA);

    // 开始智能配网
    WiFi.beginSmartConfig();
    while (1) {
      delay(500);
      // 检查智能配网
      if (WiFi.smartConfigDone()) {
        // 设置自动连接
        WiFi.setAutoConnect(true);
        break;
      }
    }
  }
}

// 循环扫描按键
static void esp_tick_task(void *arg) {
  void *sddc = arg;
  (void)sddc;
  while (1) {
    button.tick();
    delay(100);
  }
}

// 初始化传感器
void sensor_init() {
  ledcSetup(channel, freq, resolution);
  ledcAttachPin(buzzer, channel);
}

void setup() {
  byte mac[6];
  Serial.begin(115200);
  Serial.setDebugOutput(true);
  Serial.println();

  // 初始化传感器
  sensor_init();

  // 清除一下按键状态机的状态
  button.reset();

  // 创建按键扫描线程，长按 IO0 按键，松开后ESP32 将会进入 SmartConfig 模式
  sddc_printf("长按按键进入 Smartconfig...\n");
  button.attachLongPressStop(esp_io0_key_task);
  xTaskCreate(esp_tick_task, "button_tick", ESP_TASK_STACK_SIZE, NULL, ESP_TASK_PRIO, NULL);

  // 启动 WiFi 并且连接网络
  WiFi.begin("EOS-00018D", "1234567890");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // 获取并打印 IP 地址
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("'ip :");
  Serial.print(WiFi.localIP());
  Serial.println("' to connect");

  // sddc协议初始化
  sddc_lib_main(&sys_cfg);

  // 获取并打印网卡 mac 地址
  WiFi.macAddress(mac);
  sddc_printf("MAC addr: %02x:%02x:%02x:%02x:%02x:%02x\n",
              mac[5], mac[4], mac[3], mac[2], mac[1], mac[0]);
  // 使用网卡 mac 地址设置设备唯一标识 UID
  sddc_set_uid(G_sddc, mac);
}

void loop() {
  // 运行 SDDC 协议循环
  while (1) {
    sddc_printf("SDDC running...\n");
    sddc_run(G_sddc);
    sddc_printf("SDDC quit!\n");
  }

  // 销毁 SDDC 协议
  sddc_destroy(G_sddc);
}