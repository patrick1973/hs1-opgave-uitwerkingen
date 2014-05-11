boolean checkTheLight()
{
  // return true is dark
  // return false is light.
  static unsigned long lastMillis = 0;
  int ldrValue = avgValue(analogRead(ldrPin));
  Serial.print(ldrValue);
  Serial.print("---");
  Serial.println(lastMillis);
  if (ldrValue < (200)) //setpoint - hysteresis
  {
    if (( millis() - lastMillis) >= 1000)
    {
      lastMillis = millis();
      lcd.print("true");
      return true;    
    }
  }
  else if (ldrValue > (400)) //setpoint + hysteresis
  {
    lastMillis = millis();
    lcd.print("false");
    return false;
  } 
  
}
