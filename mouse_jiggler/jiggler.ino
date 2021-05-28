#include <DigiMouse.h>
void setup(){
  DigiMouse.begin();
}

void loop() {
  while(true) {
    DigiMouse.move(2,0,0); // 2px right
    DigiMouse.delay(50);
    DigiMouse.move(-2,0,0); // 2px left
    DigiMouse.delay(30000);
  }
}