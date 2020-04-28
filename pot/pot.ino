#include "pot.h"

Potasyometer pot1(A0);
Potasyometer pot2(A1);

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(pot1.oku());
  Serial.println(pot2.oku());
  delay(1000);
}
