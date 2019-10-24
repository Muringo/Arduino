int REDLED = 13;   //variable initialization
int WHITELED = 12;
int AMBERLED = 11;
int button = 2;    //button controls the lights only to operate when pressed down
int buttonValue = 0; 
void setup() {
  // put your setup code here, to run once:
  pinMode(REDLED,OUTPUT);
  pinMode(WHITELED,OUTPUT);
  pinMode(AMBERLED,OUTPUT);
  pinMode(button,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonValue = digitalRead(button);
  if (buttonValue == HIGH){
    changeLights();         //function to be called
  }
  }
  void changeLights(){
  digitalWrite(REDLED,HIGH);
  delay(5000);
  digitalWrite(AMBERLED,HIGH);
  delay(2000);


   digitalWrite(REDLED,LOW);
   digitalWrite(AMBERLED,LOW);


  digitalWrite(WHITELED,HIGH);
  delay(5000);
  digitalWrite(WHITELED,LOW);
 

}
