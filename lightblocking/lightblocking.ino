const int lightBlocking = A0; //define sensor to pin A0

const int led = 13;//define led to pin 9

int val;//create sensor value variable
int buzzer = 8;


void setup() {
 

  pinMode(lightBlocking,INPUT);//set the sensor to an input

  pinMode(led, OUTPUT);//set led as output
  pinMode(buzzer, OUTPUT);//set buzzer to indicate
  Serial.begin(9600);//begin the serial monitor
 

}

void loop() {

int val = analogRead(lightBlocking);//read the sensor

if (val < 400){

  digitalWrite(led, HIGH);//turn led on
  digitalWrite(buzzer, HIGH);//
 

}

if(val > 600){

  digitalWrite(led, HIGH);//turn led on
  digitalWrite(buzzer, HIGH);//TURN BUZZER ON 
  
}

else{

  digitalWrite(led, LOW);//turn led off
  digitalWrite(buzzer, LOW);//TURN BUZZER OFF

}

  Serial.println(val);//print the sensor value to the serial monitor

  delay(200);//wait 200 milliseconds

}



 // S - SIGNAL PIN 
 // CENTER PIN - POSITIVE PIN
 // (-) - NEGATIVE PIN
//The light blocking sensor is activated and when the card is kept within its U-shaped gap,
//the sensor senses that there is an object within the gap which is blocking the light. 
//This sends a HIGH signal. When the card is displaced, 
//the light is not blocked and the sensor sends a LOW signal and according to my code
 
