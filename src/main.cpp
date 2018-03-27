#include <avr/io.h>
#include <arduino.h>

#include "myspi.h"
#include "tripwire.h"

int main(void) {
  initLED();

  turnOnLED();

  // while(1) {
  //   turnOnLED();
  //   delayMicroseconds(50000);
  //   turnOffLED();
  //   delayMicroseconds(50000);
  // }

  return(0);
}
