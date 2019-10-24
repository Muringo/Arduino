int PIR = 6;
int REDLED = 10;
int BAZZER = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(PIR,INPUT);
   pinMode(REDLED,OUTPUT);
 pinMode(BAZZER,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PIR) == HIGH){
    digitalWrite(REDLED,HIGH);
    digitalWrite(BAZZER,HIGH);
    delay(1000);
    digitalWrite(REDLED,LOW);
    digitalWrite(BAZZER,LOW);
    delay(1000);
    Serial.println("THIEF! THIEF!");
  }
  else{
    digitalWrite(REDLED,LOW);
    digitalWrite(BAZZER,LOW);
    Serial.println("Scanning...");
    delay(1000);
  }

}
