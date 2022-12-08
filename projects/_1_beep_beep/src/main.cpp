#include <Arduino.h>

int pin = 13;

void beep() {
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100);
}

void beeep() {
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(500);
}

void beeeep() {
  digitalWrite(pin, HIGH);
  delay(1500);
  digitalWrite(pin, LOW);
  delay(1500);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  beep();
  beep();
  beep();
  beeeep();
  beep();
  beep();
}