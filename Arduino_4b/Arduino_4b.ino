 int pinpot=A0;
int REDLED=10;
int ReadValue;
float WriteValue;
float voltage;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //serial monitor has been initiated
  pinMode(pinpot,INPUT);
  pinMode(REDLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  ReadValue=analogRead(pinpot);
  WriteValue=(255./1023.)*ReadValue;
  voltage=(5./1023.)*ReadValue;
  analogWrite(REDLED,WriteValue);
  Serial.print(" tpinValue) ");
  Serial.print(ReadValue);
  Serial.print(" ");
  Serial.print("mapped Value");
  Serial.print(" ");
  Serial.print(WriteValue);
  Serial.print(" ");
  Serial.print("voltage Value");
  Serial.print(" ");
  Serial.println(voltage);
  ReadValue=analogRead(pinpot);
  digitalWrite(REDLED,HIGH);
  delay(ReadValue);
  digitalWrite(REDLED,LOW);
  delay(ReadValue);


}
