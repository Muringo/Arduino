int TRIG = 3;
int ECHO = 11;
float duration;
float distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG,LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  duration = pulseIn(ECHO,HIGH);

  distance = (duration/2)*0.0343;

  Serial.println("distance");
  Serial.print(distance);
  Serial.print("cm.");
  delay(500);
  
  
  

}
