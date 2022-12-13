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

