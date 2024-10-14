#ifndef LEDCONTROL_H  // If LEDCONTROL_H is not defined
#define LEDCONTROL_H  // Define LEDCONTROL_H

#include <Arduino.h>

// A function to map string inputs to pin numbers
int resolvePin(const char* pinName){
    if (strcmp(pinName, "LED_BUILTIN")==0){
        return LED_BUILTIN;
    }
    //Add more mappings if you have other named pins
    //Ex. if if (strcmp(pinName, "Pin_XYZ")==0){
        //return Pin_XYZ;

    return -1; //If not recognized return and invalid pin number
}

// Overloaded function to blink and LED with integer pin input
void blinkLED(int pin, int blinkDelay, int count){
    pinMode(pin, OUTPUT);
    for (int i = 0; i < count; i++) {
        digitalWrite(pin,HIGH); //Turn LED on
        delay(blinkDelay);     //Wait for blinkDelay ms
        digitalWrite(pin,LOW);  //Turn LED off
        delay(blinkDelay);  //Waiot for blinkDelay ms
    }
}

// Overloaded function to blink an LED with string pin input
void blinkLED(const char* pinName, int blinkDelay, int count) {
    int pin = resolvePin(pinName);  // Resolve the pin number
    if (pin != -1) {
        blinkLED(pin, blinkDelay, count);  // Use the resolved pin
    } else {
        // Handle invalid pin
        Serial.println("Invalid pin name");
    }
}

#endif  // LEDCONTROL_H