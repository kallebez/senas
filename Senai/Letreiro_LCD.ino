#include <LiquidCrystal.h>
unsigned int contador = 0;
LiquidCrystal lcd( 8, 9, 4, 5, 6, 7);


void setup() {
  Serial.begin(9600);

  lcd.begin(16, 2);     // configura LCD para 16 colunas e 2 linhas
  lcd.clear();          // apaga qualquer código de caracter anterior
  lcd.setCursor(0, 0);  // e posiciona o cursor em coluna '0' e linha '0'

  lcd.setCursor(5, 0); 
  lcd.write(0x47); // G
  lcd.write(0x61); // a
  lcd.write(0x62); // b
  lcd.write(0x72); // r
  lcd.write(0x69); // i
  lcd.write(0x65); // e
  lcd.write(0x6C); // l

  Serial.print("Funcionou!!!");

  lcd.setCursor(6, 1); 
  lcd.write(0x43); // C
  lcd.write(0x61); // a
  lcd.write(0x75); // u
  lcd.write(0x61); // a
 
//  lcd.write(0x53);  // imprime o caracter 'S'
 // lcd.write(0x45);  // imprime o caracter 'E'
 // lcd.write(0x4E);  // imprime o caracter 'N'
 // lcd.write(0x41);  // imprime o caracter 'A'
 // lcd.write(0x49);  // imprime o caracter 'I'


}

void loop() {
  Serial.print(contador);
  if (contador < 16) {
   lcd.scrollDisplayRight();
   contador = contador + 1;  
   delay(200);
  }
//  else
// lcd.scrollDisplayLeft();
//  contador = contador - 1;  
//  delay(200);


 if (contador >= 16 && contador < 48) {
  lcd.scrollDisplayLeft();
  contador = contador + 1;
  delay(200);
 }
  if (contador >= 48 && contador < 64) {
  lcd.scrollDisplayRight();
  contador = contador + 1;
  delay(200);
  }
  if (contador == 64) {
    contador = 0;
  }

 
}
