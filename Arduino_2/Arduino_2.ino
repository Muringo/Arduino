int REDLED=4;
int GREENLED=2;
int blinknumberREDLED;
int blinknumberGREENLED;
int LEDREDtimeon;
int LEDGREENtimeon;
int LEDREDtimeoff;
int LEDGREENtimeoff;

void setup()
            {
              Serial.begin(9600);
              pinMode(REDLED,OUTPUT);
              pinMode(GREENLED,OUTPUT);
              Serial.println("This is my first program");
              Serial.println(" ");

              Serial.println("How many Red Blinks ? ");
              Serial.println(" ");
              while (Serial.available()==0){};
              blinknumberREDLED=Serial.parseInt();

              Serial.println("How many Green Blinks ? ");
              Serial.println(" ");
              while (Serial.available()==0){};
              blinknumberGREENLED=Serial.parseInt();

              Serial.println("How long Red Blinks ? ");
              Serial.println(" ");
              while (Serial.available()==0){};
              blinknumberREDLED=Serial.parseInt();

              Serial.println("How long Green Blinks ? ");
              Serial.println(" ");
              while (Serial.available()==0){};
              blinknumberGREENLED=Serial.parseInt();


            }

void loop()
           {
            for(int j=1; j<=blinknumberREDLED; j=j+1)
           {
             Serial.print("Blinking LED is RED # ");
             Serial.println(j);
             digitalWrite(REDLED,HIGH);
             delay(LEDREDtimeon);
             digitalWrite(REDLED,LOW);
             delay(LEDREDtimeoff);
           }
    
           Serial.println(" ");

           for(int j=1; j<=blinknumberGREENLED; j=j+1)
           {
             Serial.print("Blinking LED is GREEN # ");
             Serial.println(j);
             digitalWrite(GREENLED,HIGH);
             delay(LEDGREENtimeon);
             digitalWrite(GREENLED,LOW);
             delay(LEDGREENtimeoff);
         }
   
         Serial.println(" ");
   }
