int hallsensorPin = 2;
int ledPin = 13;
int state = 0;

void setup() {
  pinMode(hallsensorPin, INPUT);
  pinMode(ledPin, INPUT);

}

void loop() {
   state = digitalRead(hallsensorPin);

   if (state == LOW) {
    digitalWrite(ledPin, HIGH);
   }
    else{
      digitalWrite(ledPin, LOW);
    }
}
