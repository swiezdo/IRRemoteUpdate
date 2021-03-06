/*Процедура отрисовки границ и иконок для кнопок на дисплее*/
void frame() {
  lcd.print(F("~~~~~~~~~~~~~~~~~~~~~"), OLED_C, 1);
  for (uint8_t i = 2; i <= 7; i++) {
    lcd.print(F("|"), OLED_L, i);
    lcd.print(F("|"), OLED_R, i);
  }
  lcd.print(F("[OK]"), OLED_C, 7);
  lcd.print(F("[>]"), 106, 7);
  (choosePosition < 6) ? lcd.print(F("[S]"), 4, 7) : lcd.print(F("[<]"), 4, 7);
}
