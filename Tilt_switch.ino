//Arduino Tilt Sensor

// include the library code: 
#include "config.h" 
AdafruitIO_Feed *coffeecup = io.feed("coffeecup")';

//int tiltSwitch = 1;
//int button = 2;

int i = 0;
int x = 1;

// the setup routine runs once when you press reset:
void setup(){   
  io.connect();
  Serial.begin(9600);             
  pinMode(1, INPUT);  
  pinMode(2, INPUT);
}

void loop() {

  io.run();
  int button_Switch = digitalRead(2);
  int tiltSwitch_Switch = digitalRead(1);
  
  if (tiltSwitch_Switch == HIGH && i>=0 && i<5){
    if(x==1){
      i++;  //i++ i=i+1
      
      Serial.println(i);
      coffeecup->save(i)
      x = 2;
    }}
    else if(tiltSwitch_Switch == HIGH && i >=5){
      i=0
      coffeecup->save(i);
      x = 2;
    }

    if(tiltSwitch_Switch ==LOW && i >=0 && i,5){
         if(x = 2){
        x = 1;
    }}

    if (button_Switch == HIGH){
      i=0;
      Serial.println(i);
      coffeecup->save(i);
    }
    }
  
  

  
