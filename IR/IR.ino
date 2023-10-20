

int RECV_PIN = 11; // the pin where you connect the output pin of sensor
int led1 = 2;
int led2 = 4;
int led3 = 7;
int itsONled[] = {0,0,0,0};
/* the initial state of LEDs is OFF (zero)
the first zero must remain zero but you can
change the others to 1's if you want a certain
led to light when the board is powered */
#define code1 16724175 // code received from button no. 1
#define code2 16718055 // code received from button no. 2
#define code3 16743045 // code received from button no. 3



void setup()
{
Serial.begin(9600); // you can ommit this line

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {




}
