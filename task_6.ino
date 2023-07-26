
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(39,16,2);
int force=A0,reading;

void setup()
{
  pinMode(force,INPUT);
  lcd.init();
  lcd.backlight();
  lcd.print("loading force...       ");
  delay(250);
lcd.clear();
   lcd.print("reading = ");
}

void loop()
{
    reading=analogRead(force);
lcd.setCursor(10,0);
  lcd.print(reading);
  
}