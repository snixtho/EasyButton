#include <Arduino.h>

#ifndef MAX_BUTTONS
#define MAX_BUTTONS 6
#endif

#define RISING_EDGE 0
#define FALLING_EDGE 1

class EasyButton {
  int state;
  int prevState;
  int pin;
  
  public:
    EasyButton(int pin);

    int isPressed();
    int on(int edge);

    static void CheckSignals();
};
