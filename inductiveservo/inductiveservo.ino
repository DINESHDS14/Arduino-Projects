#include <Servo.h>

Servo tap_servo;

int sensor_pin = 4;
int tap_servo_pin =5;


void setup(){
  pinMode(sensor_pin,INPUT);
  tap_servo.attach(tap_servo_pin);
  Serial.begin(9600);
  
}

void loop(){
  int val = digitalRead(sensor_pin);

  if (val==LOW)
  {
    tap_servo.write(0);
    Serial.println("yes");
    delay(500);
  }
 else
  {
    tap_servo.write(180);
    Serial.println("No");
    delay(500);
    }
}
