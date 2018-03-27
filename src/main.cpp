#include <avr/io.h>
#include <arduino.h>

#include "myspi.h"
#include "tripwire.h"

// int adcVal;

int main(void) {
  // Serial.begin(115200);
  // Serial.print("test\n");
  // initLED();

  Serial.begin(9600);

  // turnOnLED();

  while(1) {
    // adcVal = analogRead(A0);
    Serial.println("test\n");
  }
  // // while(1) {
  // //   turnOnLED();
  // //   delayMicroseconds(50000);
  // //   turnOffLED();
  // //   delayMicroseconds(50000);
  // // }

  return(0);
}
