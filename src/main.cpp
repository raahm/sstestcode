#include <avr/io.h>
#include <arduino.h>

#include "myspi.h"
#include "tripwire.h"

int adcTension;

int main(void) {
  Serial.begin(9600); // serial monitor with 9600 baud rate

  while(1) {
    adcTension = analogRead(A0);
    // Serial.println("test\n");
  }


  return(0);
}
