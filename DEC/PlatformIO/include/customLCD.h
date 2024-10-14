#ifndef CUSTOMLCD_H
#define CUSTOMLCD_H

#include <Arduino.h>
#include <LiquidCrystal.h>

class CustomLCD{
    public:
        CustomLCD(LiquidCrystal *lcd); //constructor

        void createCustomChars(); //method to create all custom charcters
        void displaySmiley(); //method to display the simley character
        void displayBatteryIcon(int batteryLevel, int row, int col); //method to display the battery level
        void updateBatterySymbol(int level);


private:
    LiquidCrystal* lcd; //Reference to the LCD object

    // Define custom characters here as byte arrays
    byte smiley[8] = {
        B00000,
        B10001,
        B00000,
        B00000,
        B00000,
        B10001,
        B01110,
        B00000,
    };

    byte battery[8]; //the byte array for the battery symbol


    //You can define more custom characters here
    
};

#endif