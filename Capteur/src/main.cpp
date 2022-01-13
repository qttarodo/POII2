#include <Arduino.h>
#define CAPTEUR_MASK (1<<0);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  DDRB |= CAPTEUR_MASK;
  delay(10);
  DDRB &= ~CAPTEUR_MASK;
  delay(20000);
}