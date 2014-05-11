#include <Bounce2.h>
#include "init.h"
#include <LiquidCrystal.h>
#include <Timer.h>

Timer timer;
Bounce debouncer = Bounce(); 
boolean statusCode = false;
void setup()
{
  int tickEvent = timer.every(100,readStateMachine);
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{
  timer.update();
  debouncer.update();
  
  if (checkTheLight())
  {
    lcd.print("true");
  }
  else
  {
    lcd.print("false");
  }
}
void readStateMachine()
{ 
  
  int waarde = checkValue(analogRead(boardButtonPin)); 
  if (waarde > 0)
  {
    lcd.clear();
  }
  printCode(ingevuldeCode);
  updateSateMachine(statusCode);
  statusCode = false;
  if (readCode(waarde,&ingevuldeCode[0])) // controleer of de code ingevuld is
  {
    if( controleerCode(&ingevuldeCode[0],juisteCode)) // controleer of de code juist is.
    {
      statusCode = true;
    } 
    cleanCodeArray(&ingevuldeCode[0]); // verwijder de ingevulde code.
  }

}



