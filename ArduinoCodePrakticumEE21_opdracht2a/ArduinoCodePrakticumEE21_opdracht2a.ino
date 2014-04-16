#include <Bounce2.h>

const int BUTTON_PIN = 2;
const int LED_PIN = 3;

int ledState = LOW;


// Instantiate a Bounce object
Bounce debouncer = Bounce(); 

void setup() 
{
  // Setup the button
  pinMode(BUTTON_PIN,INPUT);
  digitalWrite(BUTTON_PIN,HIGH);

  // After setting up the button, setup Bounce object
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5);

  //Setup the LED
  pinMode(LED_PIN,OUTPUT);
  digitalWrite(LED_PIN,ledState);
}

void loop()
{ 
  boolean stateChanged = debouncer.update();
  int state = debouncer.read();

  // Detect the falling edge
  if ( stateChanged && state == LOW ) {

    if ( ledState == LOW ) {
      ledState = HIGH;
    } 
    else {
      ledState = LOW;
    }
    digitalWrite(LED_PIN,ledState);    
  }
}


