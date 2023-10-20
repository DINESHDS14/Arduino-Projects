int trigPin = 9;
int echoPin = 10;
int led1 = 7;
int led2= 4;
int led3 = 3;
int led4 = 2;

void setup() {
  Serial.begin(9600); 
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("M");
  delay(10);
 
 if((distance<=12)) 
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    
}
   else if(distance>10)
 {
    digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
       digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
   }
   else{
    digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
       digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
   }
}
