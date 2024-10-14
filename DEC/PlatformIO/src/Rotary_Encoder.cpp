#include "rotary_encoder.h"
// Test

R_Encoder::R_Encoder(int pinA, int pinB, int pressPin){
    this->pinA = pinA;
    this->pinB = pinB;
    this->pressPin = pressPin;
    pinMode(pressPin,INPUT);
    pinMode(pinA, INPUT_PULLUP);
    pinMode(pinB, INPUT_PULLUP);
}



//Read encoder push button state
bool R_Encoder::isPressPinPressed(){
  return digitalRead(pressPin) == LOW; //Return true if button is pressed
}

int R_Encoder:: readA(){
return digitalRead(pinA);
}
int R_Encoder:: readB(){
return digitalRead(pinB);
}


int R_Encoder::convertGrayToBinary(int encA,int encB){
  if (encA==0 && encB ==0){
    return 2;
  }else if(encA==0 && encB==1){
    return 1;
  }else if(encA==1 && encB==0){
    return 3;
  }else if(encA==1 && encB==1){
    return 0;
  }
  return -1;
}