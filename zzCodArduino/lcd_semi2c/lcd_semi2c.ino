#include <LiquidCrystal.h>
void setup() {
  LiquidCrystal lcd(0x27); // Altere para o endereço I2C do seu módulo de LCD
  lcd.begin(16, 2); // Ajuste para o tamanho do seu LCD
}
void loop() {
  lcd.setCursor(0, 0); // Defina o cursor para a primeira linha, primeira coluna
  lcd.print("Olá, Mundo!");

  lcd.setCursor(0, 1); // Defina o cursor para a segunda linha, primeira coluna
  lcd.print("Arduino LCD");

  delay(1000); // Atraso para visibilidade

}










