void setup() {
  pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (8, INPUT_PULLUP);
pinMode(9, INPUT_PULLUP);
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
}
void loop() {
  if (digitalRead(8) == LOW) {
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(200);
     digitalWrite(2, HIGH);
    delay(200);
  digitalWrite(2, LOW);
    delay(200);
     digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(200);
     digitalWrite(2, HIGH);
    delay(200);
    }
    if (digitalRead(9) == LOW) {
      digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(200);
     digitalWrite(3, LOW);
    delay(200);
  digitalWrite(3, HIGH);
    delay(200);
     digitalWrite(3, LOW);
    delay(200);
    digitalWrite(3, HIGH);
    delay(200);
     digitalWrite(3, LOW);
    delay(200);
 digitalWrite(3, HIGH);
    delay(200);
     digitalWrite(3, LOW);
    delay(200);
  }
  else{
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    }
     }

























 
 
   