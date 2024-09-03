// armazena os pinos dos leds
int leds[] = {10, 11};

// armazena valores de entrada
int valores[] = {1, 2, 3, 4};

int tempoPiscar = 500;  // Define o tempo de piscar em milissegundos

void setup() {
  // Configura os pinos dos LEDs como saída
  pinMode(leds[0], OUTPUT);
  pinMode(leds[1], OUTPUT);

  Serial.begin(9600);
  Serial.println("....................");
  Serial.println("PRESSIONE VALOR DE ENTRADA..");
  Serial.println("....................");
}

// Função utilizada para piscar 1 LED individualmente
void acenderLed(int led) {
  digitalWrite(led, HIGH);
}


void loop() {
  if (Serial.available()) {
    String valor = Serial.readString();
    if (valor == "1") {
      digitalWrite(leds[0], HIGH);   // Liga e pisca o LED 1
    } else if (valor == "2") {
      digitalWrite(leds[0], LOW);  // Desliga o LED 1
    } else if (valor == "3") {
      digitalWrite(leds[1], HIGH);  // Liga e pisca o LED 2
    } else if (valor == "4") {
      digitalWrite(leds[1], LOW);  // Desliga o LED 2
    }
  }
}

