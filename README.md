# 一、电路图
![在这里插入图片描述](https://img-blog.csdnimg.cn/392fe399a3534a04941dc5ec459eb060.png)
# 二、代码
|管脚号| 功能 |
|--|--|
| D2 | 红灯 |
| D3 | 绿灯 |
| D4 | 黄灯 |

```c
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop() {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(3000);
    for(int i=0;i<7;i++)
    {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);  
    digitalWrite(4,HIGH);
    delay(200);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);  
    digitalWrite(4,LOW);
    delay(200);
    }
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    delay(4000);
}
```
改良了一下

```c
#define red 1
#define yellow 2
#define green 3
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop() {
    trafficLights(red);
    trafficLights(yellow);
    trafficLights(green);
}
void trafficLights(int light)
{
  switch(light){
  case 1:    digitalWrite(2,HIGH);
             digitalWrite(3,LOW);
             digitalWrite(4,LOW);
             delay(4000);
  case 2:
              for(int i=0;i<7;i++)
              {
              digitalWrite(2,LOW);
              digitalWrite(3,LOW);  
              digitalWrite(4,HIGH);
              delay(200);
              digitalWrite(2,LOW);
              digitalWrite(3,LOW);  
              digitalWrite(4,LOW);
              delay(200);
              }  
  case 3:    digitalWrite(2,LOW);
             digitalWrite(3,HIGH);
             digitalWrite(4,LOW);
             delay(4000);
  break;
  }
}

```
# 三、实现效果



![请添加图片描述](https://img-blog.csdnimg.cn/15f564a8c46d458ab5ccd95d4d71c23c.gif)

