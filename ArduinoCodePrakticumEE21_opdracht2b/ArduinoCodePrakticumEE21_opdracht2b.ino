// add the debounce library
#include <Bounce2.h>
// add the init header
#include "init.h"


void setup() 
{
  // execute the setup function
  setupIo();
}

void loop()
{ 
  // update button 1 and read the state of button 1
  boolean stateChanged1 = debouncer_button1.update();
  int state1 = debouncer_button1.read();

  // update button 2 and read the state of button 2
  boolean stateChanged2 = debouncer_button2.update();
  int state2 = debouncer_button2.read();

  // detect if the button1 has been pressed.and if it's state has been changed.
  if (stateChanged1==HIGH && state1==LOW)
  {
    if (buttonState1 == LOW)
    {
      buttonState1 = HIGH;
    }
  } 

  // detect if the button2 has been pressed.and if it's state has been changed.
  if (stateChanged2==HIGH && state2==LOW)
  {
    if (buttonState2 == LOW)
    {
      buttonState2 = HIGH;
    }
  } 

  // reset the buttonState1 id the button is not pressed any more
  if (state1 ==  HIGH)
  {
    buttonState1=LOW;
  }
  // reset the buttonState2 id the button is not pressed any more
  if (state2 ==  HIGH)
  {
    buttonState2=LOW;
  }


  // logicFunction this variable contains the selected value. This value is selected by the use from the serial monitor.
  // the value will switch between the logic functions.
  // USE_PULLUP is set to 1 if pullup resistors are used if set to 0 pull down resistors are used
  switch(logicFunction)
  {
  case 1: 
    if (USE_PULLUP == LOW)
    { 
      ledState = (!buttonState1 ^ !buttonState2); 
    }
    else
    {
      ledState = (buttonState1 ^ buttonState2);
    }
    break;                                        
  case 2:  
    if (USE_PULLUP == LOW)
    { 
      ledState = (!buttonState1 | !buttonState2);   
    }
    else
    {
      ledState = (buttonState1 | buttonState2);   
    }
    break;                                        
  case 3:  
    if (USE_PULLUP == LOW)
    { 
      ledState = (!buttonState1 & !buttonState2);
    } 
    else
    {
      ledState = (buttonState1 & buttonState2);
    }

    break;                                        
  }

  // update the led state, set the led on or off.
  digitalWrite( LED_PIN,ledState);

  // read the serial input from the use by means of the serial monitor.
  readSerialInput();
}























