#ifndef RENCODER_H
#define RENCODER_H

#include <Arduino.h>

class R_Encoder {
    private:
        int pinA;
        int pinB;
        int pressPin;

    public:

        R_Encoder(int pinA, int pinB, int pressPin);

        int readA();
        int readB();
        bool isPressPinPressed(); //method to read the button state
        int convertGrayToBinary(int encA, int encB);

};

#endif