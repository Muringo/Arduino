//trig of ultrasonic sensor
int trig = 6;
//echo of ultrasonic sensor
int echo = 3;

void setup() {
 //seting up serial
 Serial.begin(9600);
//set trig as output and echo as input for ultrasonic sensor
pinMode(trig, OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
//thats the sequence for ultrasonic sensor to start reading 
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);


int duration = pulseIn(echo, HIGH);
int distance = (duration/2) / 29.1;
//print distance on Serial port
Serial.println(distance);
delay(500);
}
