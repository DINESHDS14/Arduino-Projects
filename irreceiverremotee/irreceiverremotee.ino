#include <IRremote.h>

IRrecv IR(3);
int led1 = 13;
int led2 = 8;
int led3 = 7;


void setup() {
  // put your setup code here, to run once:
  IR.enableIRIn();
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(IR.decode()){
    Serial.println(IR.decodedIRData.decodedRawData, HEX);
    if(IR.decodedIRData.decodedRawData == 0xEA15FF00){
      digitalWrite(led1, HIGH); // INREMOTE (+) BUTTON
    }
    if(IR.decodedIRData.decodedRawData == 0xF807FF00){
      digitalWrite(led1, LOW); // IN REMOTE (-) BUTTON
    }
    if(IR.decodedIRData.decodedRawData == 0xE619FF00){
      digitalWrite(led2, HIGH); // IN REMOTE (100+) BUTTON
    }
    if(IR.decodedIRData.decodedRawData == 0xF20DFF00){
      digitalWrite(led2, LOW); // IN REMOTE (200+)BUTTON
    }
    if(IR.decodedIRData.decodedRawData == 0xF30CFF00){
      digitalWrite(led3, HIGH); // IN REMOTE (1) BUTTON
    }
     if(IR.decodedIRData.decodedRawData == 0xA15EFF00){
      digitalWrite(led3, LOW); // IN REMOTE (3) BUTTON
    }
    
    delay(1500);
    IR.resume();
  }
}
