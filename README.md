# About
EasyButton is a simple library that makes it easy to handle button input on a pin.

# Example
Hook up a push-button with the +5V terminal to one side of the button and connect the desired pin (in this case, pin 2) to the other. Also make sure you have a pull-down resistor.

## Circuit
![Schematic](schematic.png "Schematic")
## Code
```cpp
#include <EasyButton.h>

EasyButton btn(2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (btn.on(RISING_EDGE)) {
    Serial.println("Button is pressed!");
  }
}
```
