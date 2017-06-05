#include <Wire.h>
#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 9,2,3,4,5);
const int SLAVE_ADDRESS = 1;
char incomingByte = 0;
void setup() 
{
lcd.begin(20,2); 
Wire.begin(); 
}
void loop() 
{
  delay(2000);
  lcd.setCursor(0,0);
  Wire.requestFrom(SLAVE_ADDRESS,7);
  while (Wire.available()) 
  {
    incomingByte = Wire.read();
    lcd.write(incomingByte);
  }
}

