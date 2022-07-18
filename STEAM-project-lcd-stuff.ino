#include <LiquidCrystal.h>

LiquidCrystal device(11, 8, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  device.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  device.setCursor(6, 0);
  if(digitalRead(2) == HIGH) {
    device.write("Danger");
  } else {
    device.write("Safe  ");
  }
}
