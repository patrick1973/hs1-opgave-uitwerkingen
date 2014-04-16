void debugTimer()
{
  static int counter=0;
  
  if (counter >=500)
  {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(lastMillis);
  lcd.print("--");
  lcd.print(millis()-lastMillis);
  lcd.setCursor(0,1);
  lcd.print(avg);
  lcd.print("--");
  lcd.print(hysteresis);
  counter=0;
  }
  counter++;
  
}

