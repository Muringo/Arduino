#include <TimerOne.h>
String LEDStatus = "OFF";
int YellowLED = 10;
int RedLED = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(YellowLED, OUTPUT);
  pinMode(RedLED, OUTPUT);

  Timer1.initialize(100000);
  Timer1.attachInterrupt( BlinkYellow );
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RedLED, HIGH);
  delay(1000);
  digitalWrite(RedLED, LOW);
  delay(1000);
  
}

void BlinkYellow()
{
  if (LEDStatus == "ON"){
    digitalWrite(YellowLED, LOW);
    LEDStatus = "OFF";
    return;
  }
   if (LEDStatus == "OFF"){
    digitalWrite(YellowLED, HIGH);
    LEDStatus = "ON";
    return;
  }
  
}

