#include "EasyButton.h"

EasyButton::EasyButton(int pin) {
  pinMode(pin, INPUT);
  this->pin = pin;
}

int EasyButton::isPressed() {
  return this->state;
}

int EasyButton::on(int edge) {
  this->state = digitalRead(this->pin);
  int isAction = 0;

  if (this->state != this->prevState) {
    isAction = (this->state == HIGH && !edge) || (this->state == LOW && edge);
  }

  this->prevState = this->state;
  return isAction;
}
