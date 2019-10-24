#include <Stepper.h>
const float STEPS_PER_REV = 32;
const float GEAR_RED = 64;
const float STEPS_PER_OUT_REV = STEPS_PER_REV*GEAR_RED;
int StepsRequired;
int numOfItem;
Stepper steppermotor(STEPS_PER_REV,8,9,10,11);

void setup() {
  // put your setup code here, to run once:
    while(Serial.available()==0) {} 
    numOfItems=Serial.parseInt();
}

void loop() {
  // put your main code here, to run repeatedly:
  stp();

}
void stp(){
  steppermotor.setSpeed(600);
  StepsRequired = STEPS_PER_OUT_REV*numOfItems;
  steppermotor.step(StepsRequired);
  delay(2000);


  StepsRequired = STEPS_PER_OUT_REV*numOfItems;
  steppermotor.setSpeed(100);
  steppermotor.step(StepsRequired);
  delay(1000);

  
  StepsRequired = -STEPS_PER_OUT_REV*numOfItems;
  steppermotor.setSpeed(700);
  steppermotor.step(StepsRequired);
  delay(2000);
}
