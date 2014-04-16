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
// pins that are not used by the shield, use as GPIO
const int Pin1 = 1;
const int Pin2 = 2;
const int Pin3 = 3;
const int Pin10 = 10;
const int Pin11 = 11;
const int LED_PIN = 12;
const int Pin13 =13;
const int buttonPin = A0;

const int treshhold = 300;
const int LDR_PIN = A5;
const int HYST_PIN = A4;

//globals

unsigned long lastMillis = 0; // is global om het getal te kunnen printen op het LCD om te debuggen
int avg;                      // is global om het getal te kunnen printen op het LCD om te debuggen
int hysteresis;               // is global om het getal te kunnen printen op het LCD om te debuggen
#endif INIT_H
