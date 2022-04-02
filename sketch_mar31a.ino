#include <Stepper.h>

  const int Steps = 200;
  const int DIR = 14;
  const int STEP = 12;

  float rpm = 10;
  int microsteps = 30;
  Stepper stepper(Steps, DIR, STEP);

void setup() {
  stepper.setSpeed(30); 
}

void loop() {
} 
