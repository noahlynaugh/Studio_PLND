//put header files here:
#include <Arduino.h>
#include  "Joystick.h"
#include "blink.h"
#include <LiquidCrystal.h>
#include "rotary_encoder.h"
#include "customLCD.h"

// put function declarations here:
Joystick joystick(A7,A6,2); //Pin 21 (X-axis), Pin 20 (Y-axis), Pin 2 (Button Pin)
int joystickDelay = 50;

R_Encoder encoder(3,4,A5); //Pin 3(encA), Pin 3(encB, PinA5(Encoder Push Pin)

// Define PWM pins for RGB LED
const int redPin = 9;   // PWM pin for Red
const int greenPin = 10; // PWM pin for Green
const int bluePin = 11; // PWM pin for Blue

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 13, 5, 6, 7, 8); // (RS, E, D4, D5, D6, D7)
//Create an instance of CustomLCD
CustomLCD customLCD(&lcd);

void setColor(int redValue, int greenValue, int blueValue); //Function prototype

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  blinkLED("LED_BUILTIN",500,3);
  delay(1500);
  Serial.println("connected");
  setColor(0, 255, 255); // Red

  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  customLCD.createCustomChars();
   // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("Hello, World!");
  // Print a message on the second row of the LCD
  lcd.setCursor(13,0); //works from 0 to 15 and 0 to 1
  customLCD.displaySmiley();
  customLCD.displayBatteryIcon(25, 0,15);

  // Set RGB pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //read joystick axis values
  int xReading = joystick.readX();
  int yReading = joystick.readY();
  //Print X and Y axis Readings
  Serial.print("X-axis: ");
  Serial.print(xReading);
  Serial.print("  Y-axis: ");
  Serial.println(yReading);
   //Check if the button is pressed 
  if(joystick.isButtonPressed()) {
    Serial.println("Button Pressed!");
  }else{
    Serial.println("Button Released.");
  }
  delay(joystickDelay);

  int encA = encoder.readA();
  int encB = encoder.readB();
  int encoderValue = encoder.convertGrayToBinary(encA,encB);
  // Print the binary value
  Serial.print("Binary Value: ");
  Serial.println(encoderValue);
  delay(100); // Add a small delay to make the output more readable

  // Test RGB LED colors based on encoder value
  switch (encoderValue) {
    case 0:
      setColor(0, 255, 255); // Red
      break;
    case 1:
      setColor(255, 0, 255); // Green
      break;
    case 2:
      setColor(255, 255, 0); // Blue
      break;
    case 3:
      setColor(0, 0, 255); // Yellow
      break;
    default:
      setColor(0, 0, 0); // White (default)
      break;
  }

  delay(100); // Small delay for readability
  
}


// Function to set RGB color using PWM values (0-255)
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue); // Write PWM value to red pin
  analogWrite(greenPin, greenValue); // Write PWM value to green pin
  analogWrite(bluePin, blueValue); // Write PWM value to blue pin
}


