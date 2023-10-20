int pin = 7;
int tapStatus;
int Led = 13;
int buzzer = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT);
  pinMode(Led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tapStatus = digitalRead(pin);
  if(!tapStatus){
    Serial.println("I HAVE TAPPED");
    digitalWrite(Led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(Led, LOW);
    digitalWrite(buzzer, LOW);
  }
  
  
}

// APPLICATIONS 
// USED IN AUTOMATION 
// ENGINE IS UNSTABLE AND VIBRATES VIOLENTLY 
//Repeated knocking causes damage to the cylinder head gasket and cylinder head.
//Knock sensors are used in the car’s spark plug.
//Automotive industries.


//DUE TO VIBRATION A COUNTER WEIGHT INSIDE THE SENSOR IS APPLYING PRESSURE ON THE PIEZO-ELEMENT,
//THIS PRESSURE CREATES AN ELECTRIC CHARGE IN THE PIEZO ELEMENT WHICH IS THE OUTPUT SIGNAL OF THE SENSOR.
