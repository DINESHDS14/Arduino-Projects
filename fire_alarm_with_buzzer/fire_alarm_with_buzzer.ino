const int buzzerPin = 12;
const int flamePin = 11;
int Flame = HIGH;
int blueled = 5;
int greenled = 6;
void setup() {
 pinMode(buzzerPin , OUTPUT);
 pinMode(blueled , OUTPUT);
 pinMode(greenled , OUTPUT);

 pinMode(flamePin , INPUT);
 Serial.begin(9600);

}

void loop() {
  Flame = digitalRead(flamePin);
  if(Flame== LOW);
  { 
    digitalRead(buzzerPin, HIGH);
    digitalRead(blueled, HIGH);
    digitalRead(greenled, LOW);
  }
   else
   {
    digitalRead(buzzerPin, LOW);
    digitalRead(greenled, HIGH);
    digitalRead(blueled , LOW); 
   }
}
