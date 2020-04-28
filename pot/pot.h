#ifndef _POT_H
#define _POT_H
#include "Arduino.h"

class Potasyometer{
  private:
    byte _pin;
  public:
    Potasyometer(byte pin);
    int oku();
  
};


#endif //_POT_H
