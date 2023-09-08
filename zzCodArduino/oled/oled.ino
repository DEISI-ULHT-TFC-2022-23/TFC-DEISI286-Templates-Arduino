const int pinoTMP = A0; // Pino analógico conectado ao TMP36

void setup() {
  Serial.begin(9600); // Inicialize a comunicação serial
}

void loop() {
  // Leia o valor analógico do TMP36
  int valorSensor = analogRead(pinoTMP);

  // Converta o valor analógico em tensão (0-5V)
  float tensao = (valorSensor / 1024.0) * 5.0;

  // Converta a tensão em temperatura em graus Celsius
  float temperaturaC = (tensao - 0.5) * 100.0;

  // Converta a temperatura para Fahrenheit (opcional)
  float temperaturaF = (temperaturaC * 9.0 / 5.0) + 32.0;

  // Imprima os valores de temperatura no monitor serial
  Serial.print("Temperatura (Celsius): ");
  Serial.println(temperaturaC);
  Serial.print("Temperatura (Fahrenheit): ");
  Serial.println(temperaturaF);

  delay(1000); // Atraso de 1 segundo
}












