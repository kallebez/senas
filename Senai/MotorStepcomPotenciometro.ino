#include <Stepper.h>
int passosporvolta = 32;
Stepper mp(passosporvolta, 8, 9, 10, 11);
unsigned int valorA0 = 0;
unsigned int motorSpeed = 600;
unsigned int motorStep = 0;
void setup () {
  mp.setSpeed(motorSpeed); //Velocidade
  Serial.begin(9600);
}

void loop() {
valorA0 = analogRead(A0);
motorStep = map(valorA0, 0, 1023, 100, 1200); //Velocidade Max
Serial.println(motorSpeed); 
mp.setSpeed(motorStep);
mp.step(motorStep);
delay(10);
mp.step(-motorStep);
delay(10); //Pausa
}