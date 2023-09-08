// Defina os pinos de controle do LCD
const int rs = 7; // RS (Seleção de Registro)
const int rw = 8; // RW (Leitura/Escrita)
const int en = 9; // EN (Ativar)

// Defina os pinos de dados D0 a D7
const int d0 = 2;
const int d1 = 3;
const int d2 = 4;
const int d3 = 5;
const int d4 = 6;
const int d5 = 10;
const int d6 = 11;
const int d7 = 12;
void lcdInitialize() {
  digitalWrite(rs, LOW); // Modo de comando
  digitalWrite(rw, LOW); // Modo de escrita

  // Inicialização no modo de 8 bits
  lcdWrite(0x03);
  delay(5);

  // Troque para o modo de 4 bits
  lcdWrite(0x02);
  delay(5);

  // Configure as configurações de exibição, função e modo
  lcdCommand(0x28);

  // Limpe a tela e retorne ao início
  lcdClear();
}
void setup() {
  // Configure os pinos de dados como saídas
  pinMode(d0, OUTPUT);
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);
  pinMode(d5, OUTPUT);
  pinMode(d6, OUTPUT);
  pinMode(d7, OUTPUT);

  // Inicialize o LCD
  lcdInitialize();
}
void lcdCommand(byte cmd) {
  digitalWrite(rs, LOW); // Modo de comando
  lcdWrite(cmd);
}

void lcdWrite(byte data) {
  digitalWrite(en, HIGH); // Ativar alto
  delayMicroseconds(1);
  digitalWrite(en, LOW); // Ativar baixo

  for (int i = 0; i < 8; i++) {
    digitalWrite(d0 + i, (data >> i) & 0x01); // Envie cada bit
  }
}
void loop() {
  lcdCommand(0x80); // Defina o cursor para a primeira linha
  lcdWrite("Olá, Mundo!");

  delay(1000); // Atraso para a visibilidade
}









