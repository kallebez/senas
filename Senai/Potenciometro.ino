unsigned valorA0 = 0;
void setup() {

Serial.begin(9600);
Serial.print("Usando Monitor Serial...");
}

void loop() {
  valorA0 = analogRead(A0); //leitura A/D
  if (valorA0 >= 0 && valorA0 <= 204) {
  Serial.println("Tensao ate 1 volts"); 
}
else if (valorA0 >= 205 && valorA0 <= 409) {
  Serial.println("Tensao acima de 1 volts e abaixo de 2 volts");
}

else if (valorA0 >= 410 && valorA0 <= 613) {
  Serial.println("Tensao acima de 2 volts e abaixo de 3 volts");
}

else if (valorA0 >= 614 && valorA0 <= 818) {
  Serial.println("Tensao acima de 3 volts e abaixo de 4 volts");
}

else{
  Serial.println("Tensao acima de 4 volts e abaixo de 5 volts");
}
delay(1000);
}
