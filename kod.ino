#include <OLED_I2C.h>

OLED ekran(SDA,SCL);

extern uint8_t yuzyilimg[];

void setup() {
     if(!ekran.begin(SSD1306_128X32)){
      while(1);
     }
}

void loop() {
  ekran.clrScr();
  ekran.drawBitmap(0, 0, yuzyilimg, 120, 32);
  ekran.update();
  ekran.invert(1);
  ekran.update();
  delay(2000);
  ekran.invert(0);
  delay(2000);
}
