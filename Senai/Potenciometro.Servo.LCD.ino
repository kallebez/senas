// Servo motor SG90 + LCD Keypad Shield + PotenciÔmetro 
#include <Servo.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
Servo servo1;
int pos = 0;
unsigned int valorA1 = 0;
void setup() {
 servo1.attach(3);
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" - ServoMotor - ");
  lcd.setCursor(0, 1);
  lcd.print("Angulo: ");
}
void loop() {
  valorA1 = analogRead(A1);
  pos = map(valorA1, 0, 1023, 0, 180);
  servo1.write(pos);
  lcd.setCursor(8, 1);
if (pos < 10) lcd.print(" ");
if (pos >=10 && pos < 100) lcd.print(" ");
lcd.print(pos);
delay(100);
}
 
 
 