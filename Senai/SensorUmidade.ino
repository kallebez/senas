#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
#include <DHT.h>
#define DHTPIN 2
DHT sensor (DHTPIN, DHT22);
float hum, temp;

void setup(){
  Serial.begin(9600);
  Serial.println("Sensor DHT22");
  sensor.begin();
  lcd.begin(16, 2); //16 colunas e 2 linhas   
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temp:  ");
  lcd.setCursor(0,1);
  lcd.print("Umid: ");



}
void loop(){
  delay(2000);
  hum = sensor.readHumidity();
  temp = sensor.readTemperature();

  if (isnan(hum) || isnan(temp)) {
    Serial.println(F("Falha no sensor DHT22"));
    return;
  }
  Serial.print("Umid: ");
  Serial.print(hum);
  Serial.println(" %");
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.println(" C");

  lcd.setCursor(6,1);
  lcd.print(hum);
  lcd.println(" %   ");
  lcd.setCursor(6,0);
  lcd.print(temp);
  lcd.println(" C   ");



}