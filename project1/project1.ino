#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
void setup() {
   // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.clear();
  // Print a message to the LCD.
  lcd.print("hello, world!");

}

void loop() {
   lcd.setCursor(0, 0);
//  // Turn off the display:
//  lcd.noDisplay();
//  delay(500);
//  // Turn on the display:
//  lcd.display();
//  delay(500);

}
