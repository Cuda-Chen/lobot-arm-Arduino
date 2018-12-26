#include "LobotServoController.h"

LobotServoController myServo;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600); // Lobot board likes baud rate 9600
  // if serial connection sucks
  while(!Serial);
  digitalWrite(13, HIGH);

  myServo.moveServo(1, 1500, 1000);
  delay(1000);
}

void loop() {
  myServo.moveServo(1, 1400, 1000);
  delay(2000);
  myServo.moveServo(1, 1600, 1000);
  delay(2000);
}
