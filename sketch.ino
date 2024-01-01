// Definir los pines a los que están conectados los LEDs
int ledPins[] = {2, 3, 4}; // Cambia los números de pin si están conectados a otros pines

void setup() {
  // Configurar los pines como salidas
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Encender y apagar los LEDs en un bucle
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPins[i], HIGH); // Encender el LED
    delay(1000); // Esperar medio segundo
    digitalWrite(ledPins[i], LOW); // Apagar el LED
  }
}
