#include "tripwire.h"

void initLED() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  return;
}

/*
* currently set up to always output to both emitter and receiver;
* this allows me to test receiver and emitter
*/
void turnOnLED() {
  digitalWrite(13, HIGH); // setupt for emitter; will likely change to be using +5V output
  digitalWrite(12, HIGH); // setup for receiver; will test for use with +5V output
  return;
}

void turnOffLED() {
  digitalWrite(13, LOW);
}
