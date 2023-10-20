#include<Servo.h>


Servo myservo, myservo1, myservo2;


void setup() {
  myservo.attach(9);
  myservo1.attach(3);
  myservo2.attach(5);
  

}

void loop() {

myservo.write(0);
myservo1.write(0);
myservo2.write(0);
delay(1000);
myservo.write(90);
myservo1.write(90);
myservo2.write(90);
delay(1000);
myservo.write(180);
myservo1.write(180);
myservo2.write(180);
delay(1000);

}
