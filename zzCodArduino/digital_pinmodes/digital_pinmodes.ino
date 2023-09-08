void setup() {
  Serial.begin(9600); // Inicialize a comunicação serial a 9600 bauds
}
void loop() {
  if (Serial.available() > 0) {
    char caractereRecebido = Serial.read();
    Serial.print("Recebido: ");
    Serial.println(caractereRecebido);
  }
}



