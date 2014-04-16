#include "init.h"
#include <LiquidCrystal.h>


void setup()
{
  runSetup();
  lcd.begin(16, 2);
}

void loop()
{
  int avg = avgValue(analogRead(LDR_pin));

  if ((millis() - lastMillis) >= 10000)  //indien het verschil meer dan 10000 is
  {
    lastMillis = millis();              // update de waarde 
    digitalWrite(LED_PIN,HIGH);     
  }
  if (avg > treshhold)                  // indien het licht genoeg is dan update tellers en schakel het LED uit.
  {
    digitalWrite(LED_PIN,LOW);
    lastMillis = millis();
  }
  debugTimer(); 
}









