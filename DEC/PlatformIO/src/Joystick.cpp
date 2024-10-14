#include "Joystick.h"

Joystick::Joystick(int x, int y, int button, int r) : xPin(x), yPin(y), buttonPin(button), range(r), center(r / 2), threshold(r / 4) {
  pinMode(buttonPin, INPUT);  // Set the button pin as input
}


int Joystick::readX() {
  return readAxis(xPin);
}

int Joystick::readY() {
  return readAxis(yPin);
}

//Read the button state
bool Joystick::isButtonPressed(){
  return digitalRead(buttonPin) == LOW; //Return true if button is pressed
}

int Joystick::readAxis(int pin) {
  int reading = analogRead(pin);
        #pragma region//for debugging
  // Serial.print("Raw reading from pin");
  // Serial.print(pin);
  // Serial.print(": ");
  // Serial.println(reading);
        #pragma endregion
  reading = map(reading, 0, 1023, 0, range);
  int distance = reading - center;

  if (abs(distance) < threshold) {
    distance = 0;
  }

  return distance;
}
