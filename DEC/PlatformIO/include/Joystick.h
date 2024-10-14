#ifndef JOYSTICK_H
#define JOYSTICK_H

#include <Arduino.h>

class Joystick {
  private:
    int buttonPin;
    int xPin;
    int yPin;
    int range;
    int center;
    int threshold;

  public:
    Joystick(int x, int y, int buttonPin, int r = 12);

    int readX();
    int readY();
    bool isButtonPressed(); //method to read the button state

  private:
    int readAxis(int pin);
};

#endif