//Sensor Ultrasonico - HC SR04
#include <Ultrasonic.h> //by Erick Simões
#include <LiquidCrystal.h>
LiquidCrystal lcd( 8, 9, 4, 5, 6, 7);
int echoPin = 2;
int trigPin = 3;
Ultrasonic ultrasonic(trigPin, echoPin);
int distancia;
void setup() {
  Serial.begin(9600);
   lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distancia:");
}
void loop() {
  distancia = ultrasonic.read();
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" CM");
  delay(500);
  if (distancia < 10) lcd.print(" ");
  if (distancia >=10 && distancia < 357) lcd.print(" ");
  lcd.setCursor(1, 8);
  lcd.print(distancia);
  lcd.setCursor(6, 1);
  lcd.println("Cm        ");

}

