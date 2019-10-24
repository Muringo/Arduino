#include<Servo.h>

Servo servopin;
int PIR=6;
int Readvalue;

void setup() {
  servopin.attach(10);
  pinMode(PIR,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  Readvalue=digitalRead(PIR);
  if(Readvalue==HIGH){
    
  servopin.write(90);
  delay(1000);}
  
  else{servopin.write(0);
  delay(10);
  }  
  }


