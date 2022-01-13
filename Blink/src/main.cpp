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

void timerSetup(){
  TCCR1A = 0;
  TCCR1B = (1<< WGM12) | (1<< CS12) | (1<<CS10);
  OCR1A = 15625;
  TIMSK1 = (1 << OCIE1A);
}

ISR(TIMER1_COMPA_vect){
  toggleLed();
}

void setup() {
  // put your setup code here, to run once:
  ledSetup();
  timerSetup();
}

void loop() {
}