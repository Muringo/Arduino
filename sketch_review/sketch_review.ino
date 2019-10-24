int REDLED = 5;
int PIR = 11;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIR,INPUT);
  pinMode(REDLED,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
 
  val = digitalRead (PIR);
  if(val == HIGH) {
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  }
  


  

}
