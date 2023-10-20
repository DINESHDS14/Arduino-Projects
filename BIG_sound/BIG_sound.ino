const int ledpin = 13;
const int soundpin = A2;
const int threshold = 150; 
void setup() {
  Serial.begin(9600);
 pinMode(ledpin , OUTPUT);
 pinMode(soundpin , INPUT);
}

void loop() {
  int soundsens=analogRead(soundpin);  
    if (soundsens>=threshold)  {
       digitalWrite(ledpin, HIGH);
    delay(1000);
    }
    else{
         digitalWrite(ledpin,LOW);
         }
    
}
