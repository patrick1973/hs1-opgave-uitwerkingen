#include <arduino.h> 
// arduino.h must be included to understand LOW and HIGH

#ifndef INIT_H   
#define INIT_H
#define USE_PULLUP 1    // change this to 1 if you are using pullup resistors. 
const int BUTTON_1 = 2; // setup constant variable for the io pin that is connected to button 3
const int BUTTON_2 = 3; // setup constant variable for the io pin that is connected to button 2
const int LED_PIN = 5;  // setup constant variable for the io pin that is connected to the led

int ledState = LOW;     // declare global variable for the stat of the led (on /off)
int buttonState1 = LOW; // declare global variable to detect if button 1 has been pressed and changed --> change the init state for pull down to HIGH and for pull up to LOW
int buttonState2 = LOW; // declare global variable to detect if button 2 has been pressed and changed --> change the init state for pull down to HIGH and for pull up to LOW
int logicFunction = 1;  // declare global variable to select and switch between logic functions

// Instantiate a Bounce object
Bounce debouncer_button1 = Bounce(); 
Bounce debouncer_button2 = Bounce();

#endif INIT_H


