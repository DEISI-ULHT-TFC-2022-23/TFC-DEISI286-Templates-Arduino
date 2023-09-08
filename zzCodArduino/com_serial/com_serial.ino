#include <Wire.h>
void setup() {
  Wire.begin(); // Inicializar a comunicação I2C
  // Opcionalmente, definir a velocidade do relógio I2C (por exemplo, 400 kHz):
  Wire.setClock(400000); // 400 kHz
}

void loop() {
  Wire.beginTransmission(0x68); // Iniciar comunicação com o dispositivo no endereço 0x68
  Wire.write(0x00); // Especificar o registro que você deseja ler (por exemplo, registro 0)
  Wire.endTransmission(); // Finalizar a transmissão

  // Solicitar dados do dispositivo
  Wire.requestFrom(0x68, 6); // Solicitar 6 bytes de dados do dispositivo

  while (Wire.available()) {
    byte dados = Wire.read(); // Ler um byte de dados
    // Processar os dados recebidos
  }

  delay(1000); // Aguardar 1 segundo antes da próxima comunicação
}





