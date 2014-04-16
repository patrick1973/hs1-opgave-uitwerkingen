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
  hysteresis = analogRead(HYST_PIN); 


  if (avg < (abs(treshhold - hysteresis)))
  {
    if ((millis() - lastMillis) >= 10000)  //indien het verschil meer dan 10000 is
    {
      digitalWrite(LED_PIN,HIGH); 
      lastMillis = millis();              // update de waarde 
    } 
  }
  else if (avg > (treshhold + hysteresis))
  {
    digitalWrite(LED_PIN,LOW); 
    lastMillis = millis();
  }
  //debugTimer(); 
}












