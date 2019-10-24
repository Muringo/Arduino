int trig=6;
int eco=3;
float duration;
float distance;
void setup() {
 Serial.begin(9600);
 pinMode(trig,OUTPUT);
 pinMode(eco,INPUT);
 // put your setup code here, to run once:
}
void loop() {
 digitalWrite(trig,LOW);
 delayMicroseconds(5);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
 duration=pulseIn(eco,HIGH);
 distance=(duration*0.0343)/2;
 Serial.println("distance");
 Serial.print("");
 Serial.println(distance);
 delay(500);
 // put your main code here, to run repeatedly:
}

