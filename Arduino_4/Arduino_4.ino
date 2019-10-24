int REDLED=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(REDLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(REDLED,102);
  delay(1000);
  analogWrite(REDLED,0);
  delay(1000);
  

}
