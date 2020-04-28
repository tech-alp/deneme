#include "pot.h"

Potasyometer::Potasyometer(byte pin){
  pinMode(pin,INPUT);
  this->_pin = pin;
 
}

int Potasyometer::oku(){
  int deger = analogRead(_pin);
  return deger;
}
