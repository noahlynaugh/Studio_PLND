//put header files here:
#include <Arduino.h>
#include  "Joystick.h"
#include "blink.h"

// put function declarations here:
Joystick joystick(A7,A6,2); //Pin 21 (X-axis), Pin 20 (Y-axis), Pin 2 (Button Pin)
int joystickDelay = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  blinkLED("LED_BUILTIN",500,3);
  Serial.println("connected");
}

void loop() {
  // put your main code here, to run repeatedly:
  #pragma region //joystick values
  #pragma region //read joystick axis values
  int xReading = joystick.readX();
  int yReading = joystick.readY();
  #pragma endregion
  #pragma region //Print X and Y axis Readings
  Serial.print("X-axis: ");
  Serial.print(xReading);
  Serial.print("  Y-axis: ");
  Serial.println(yReading);
  #pragma endregion
  #pragma region //Check if the button is pressed 
  if(joystick.isButtonPressed()) {
    Serial.println("Button Pressed!");
  }else{
    Serial.println("Button Released.");
  }
  #pragma endregion
  delay(joystickDelay);
  #pragma endregion
}


