#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // Ajuste para corresponder ao seu display OLED
#define SCREEN_HEIGHT 64 // Ajuste para corresponder ao seu display OLED

void setup() {
  Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
  // Inicialize com o endereço I2C (0x3D para alguns módulos)
  if(!display.begin(SSD1306_I2C_ADDRESS, OLED_RESET)) {
    Serial.println(F("A alocação SSD1306 falhou"));
    for(;;);
  }

  // Limpe o display
  display.clearDisplay();
}
void loop() {
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print("Olá, Mundo!");

  display.display(); // Mostre as alterações no OLED
  delay(1000); // Atraso para visibilidade
}











