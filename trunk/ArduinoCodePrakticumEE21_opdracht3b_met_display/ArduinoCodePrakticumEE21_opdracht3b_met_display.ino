#include "init.h"
#include <LiquidCrystal.h>

void setup()
{
  runSetup();
  lcd.begin(16, 2);
}

void loop()
{
  avg = avgValue(analogRead(LDR_PIN));
  setpoint = analogRead(SETPOINT_PIN); 


  if (avg < (setpoint - HYST))
  {
    if ((millis() - lastMillis) >= 10000)  //indien het verschil meer dan 10000 is
    {
      digitalWrite(LED_PIN,HIGH); 
      lastMillis = millis();              // update de waarde 
    } 
  }
  else if (avg > (setpoint + HYST))
  {
    digitalWrite(LED_PIN,LOW); 
    lastMillis = millis();
  }
  debugTimer(); 
}












