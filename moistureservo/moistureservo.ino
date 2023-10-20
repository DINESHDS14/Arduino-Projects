#include <Servo.h>



Servo rotate;

int sensor_pin = A0;
int rotatepin =6;
int val;

void setup(){
  pinMode(sensor_pin,INPUT);
  rotate.attach(rotatepin);
  Serial.begin(9600);
  
}

void loop(){
  val = analogRead(sensor_pin);

  Serial.print("soil moisture level : ");
  Serial.println(val);
  delay(200);

 if (val>=1022)
  { 
    rotate.write(0);
  }
  else 
  {
    rotate.write(180);
    }
}
