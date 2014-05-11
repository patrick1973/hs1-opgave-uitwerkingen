
#include <arduino.h> 
#include <LiquidCrystal.h>

// arduino.h must be included to understand LOW and HIGH and A0

#ifndef INIT_H   
#define INIT_H


// constants voor display besturing
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;
const int rs = 8;
const int e  = 9;

LiquidCrystal lcd(rs,e,d4,d5,d6,d7);

//not used digital pins
const int Pin1 = 1;
const int Pin2 = 2;
const int Pin3 = 3;
const int Pin10 = 10;
const int Pin11 = 11;
const int LED_PIN = 12;
const int Pin13 =13;

// analoge pins
const int lcdButtonPin = A0;
const int boardButtonPin = A1;
const int ldrPin  =  A2;

typedef enum buttons
{
  BUTTON1 = 1023,
  BUTTON2 = 513,
  BUTTON3 = 340,
  BUTTON4 = 254
};

typedef enum States
{
  SystemDisArmed,
  SystemArmed,
  SystemIdle,
  AlarmActivated
};
//LDR vars
const int setpoint = 200;
const int hysteresis = 100;

//Code vars
const int juisteCode[] = { BUTTON2,BUTTON2,BUTTON3,BUTTON3 };
int ingevuldeCode[4];
#endif INIT_H

