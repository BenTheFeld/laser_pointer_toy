#include <ESP32Servo.h>

Servo x,y;

int angleS = 0;
float angleX = 0;
float angleY = 0;

void setup() {
  x.attach(2, 500, 2500);
  y.attach(4, 500, 2500);
  x.write(100);
  y.write(100);

}

void loop() {
  angleX = cos(M_PI*angleS/180);
  angleY = sin(M_PI*angleS/180);
  angleS += 1;
  x.write(85+angleX*15);
  y.write(85+angleY*15);
  delay(30);

}
