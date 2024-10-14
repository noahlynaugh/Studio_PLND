#include "customLCD.h"

CustomLCD::CustomLCD(LiquidCrystal* lcdRef){
    this->lcd =lcdRef;
    //Constructor initializes with the LCD reference
    //define defualt battery symbol
    byte defaultBattery[8] ={
        B01110,
        B10001,
        B10101,
        B10101,
        B10101,
        B10101,
        B10001,
        B11111,
    };
    memcpy(battery, defaultBattery, 8);  // Copy the default battery
}

void CustomLCD::createCustomChars(){
    lcd->createChar(0,smiley); //Register smiley character
    lcd->createChar(1,battery);
    //You can add more characters by calling lcd.createChar() with other arrays
}

void CustomLCD::displaySmiley(){
    lcd->write(byte(0)); //Write smiley character to the LCD
}

void CustomLCD::updateBatterySymbol(int level){
    //Modify the battery array based on the battery level
        int filledBars = map(level,0,100,0,5); //map level to 0-5 bars

        // Fill in the battery icon from the bottom up
    for (int i = 2; i < 6; i++) { // Rows 2 to 6 represent filled bar levels
        if (i >= (6 - filledBars)) {
            battery[i] = B10101; // Full bar (display filled)
        } else {
            battery[i] = B10001; // Empty bar
        }
    }


    //Re-register the updated battery symbol
    lcd->createChar(1,battery);

}

void CustomLCD::displayBatteryIcon(int batteryLevel, int row, int col) {
    updateBatterySymbol(batteryLevel);  // Update battery visual based on current level

    // Display the battery icon at the specified position on the LCD
    lcd->setCursor(col, row);  // Set cursor to specified position
    lcd->write(byte(1));       // Write the updated battery icon
}

