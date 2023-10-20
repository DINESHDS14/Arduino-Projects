int laser = 6;

void setup() {
  pinMode(laser,OUTPUT);

}

void loop() {
  digitalWrite(laser,HIGH);
  delay(2000);
  digitalWrite(laser,LOW);
  delay(2000);

}
