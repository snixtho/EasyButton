#include "EasyButton.h"

EasyButton btn(8);
EasyButton btn2(7);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (btn2.on(RISING_EDGE)) {
    Serial.println("Button 2 pressed!");
  }
  
  if (btn.on(RISING_EDGE)) {
    Serial.println("Button pressed!");
  }
}
