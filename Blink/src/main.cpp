#include <Arduino.h>
#define LED_MASK (1<<5);

/*
void OnLed(){
PORTB |= LED_MASK;
}

void OffLed(){
PORTB &= ~LED_MASK;
}
*/

void toggleLed(){
  PINB |= LED_MASK;
}

void ledSetup(){
  DDRB |= LED_MASK;
}

void setup() {
  // put your setup code here, to run once:
  ledSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
  toggleLed();
  delay(1000);
}