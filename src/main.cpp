#include <avr/io.h>
#include <arduino.h>

#include "myspi.h"
#include "tripwire.h"

int adcTension;
int beadCount;
int beadDelta;
int beadStart;
double tension;
double tensionPrev;
double tensionDelta;
float circumference;

int main(void) {
  Serial.begin(9600); // serial monitor with 9600 baud rate
  beadCount = 10;	// this value will be changed to whatever the actual start is


  while(1) {
    adcTension = analogRead(A0);
    // Serial.println("test\n");
  }


  return(0);
}
