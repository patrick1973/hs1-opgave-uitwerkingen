void debugTimer()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(lastMillis);
  lcd.setCursor(0,1);
  lcd.print(millis());
  lcd.print("--");
  lcd.print(millis()-lastMillis);
}

