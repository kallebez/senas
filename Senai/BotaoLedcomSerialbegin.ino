// Botão Pulsador    

bool estadoled = LOW; // variavel de controle

void setup() {
  pinMode(2, INPUT_PULLUP);  // Configura o pino 2 como entrada com pull-up
  pinMode(13, OUTPUT);       // Configura o pino 13 como saída
  digitalWrite(13, estadoled);  // Inicializa o LED conforme o estado
  Serial.begin(9600);        // Inicializa a comunicação serial
}

void loop() {
  if (digitalRead(2) == LOW) {  // Se o botão estiver pressionado (pino 2 em LOW)
    estadoled = !estadoled;      // Troca o estado do LED
    digitalWrite(13, estadoled); // Atualiza o LED com o novo estado
    
    // Exibe o estado do LED no monitor serial
    Serial.print("Estado LED: ");
    if (estadoled == HIGH) {
      Serial.println("Ligado");
    } else {
      Serial.println("Desligado");
    }
    
    delay(100);
  }
}
