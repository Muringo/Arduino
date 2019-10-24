int REDLED=5;
int pinpot=A0;
int inputValue=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(REDLED,OUTPUT);
  pinMode(pinpot,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  inputValue=analogRead(pinpot);
  digitalWrite(REDLED,HIGH);
  delay(inputValue);
  digitalWrite(REDLED,LOW);
  delay(inputValue);

}
