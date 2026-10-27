Код:
#include <TouchScreen.h>

const int YP = A3;
const int XM = A2;
const int YM = 9;
const int XP = 8;

TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);

void setup() {
  Serial.begin(9600);
}

void loop() {
  TSPoint p = ts.getPoint();

  if (p.z > 0) {
    Serial.print("X = ");
    Serial.print(p.x);
    Serial.print("\tY = ");
    Serial.print(p.y);
    Serial.print("\tZ = ");
    Serial.println(p.z);

    delay(100);
  }
}
