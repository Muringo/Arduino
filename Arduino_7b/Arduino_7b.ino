int REDLED = 5;
int BLUELED = 10;
int PIR = 11;
int SERVO;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIR,INPUT);
  pinMode(REDLED,OUTPUT);
  pinMode(BLUELED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int j=1; j<=10; j=j+1);
  SERVO = digitalRead (PIR);
  if(SERVO == HIGH) {
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  }
  else{
  digitalWrite(BLUELED,HIGH);
  delay(1000);
  digitalWrite(BLUELED,LOW);
  delay(1000);
  }


  

}
