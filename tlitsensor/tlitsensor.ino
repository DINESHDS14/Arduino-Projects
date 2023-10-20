#define TILT 2
#define LED 13
#define BUZZER 8


void setup() {
  Serial.begin(9600);
  pinMode(TILT, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);

}

void loop() {
  int TILT_VALUE = digitalRead(TILT);
  if (TILT_VALUE == LOW){
    digitalWrite(LED,HIGH);
    digitalWrite(BUZZER, HIGH);
    delay(1000);
  }
  else {
    digitalWrite(LED,LOW);
    digitalWrite(BUZZER, LOW);
  }

}

//S - SIGNAL PIN
//CENTER PIN - POSITIVE PIN 5V
//(-) - NEGATIVE PIN GND

//APPLICATIONS OF THE TLIT SENSOR 
// USED IN GAME CONSOLE
// USED IN AVIATION FLIGHT CONTROL 
// USED IN CONSTRUCTION EQUIPMENT AND INDUSTRIAL MACHINERY 

// IT CONTAINS MERCURY INSIDE THE TUBE TO CALIBRATE THE POSITION 
