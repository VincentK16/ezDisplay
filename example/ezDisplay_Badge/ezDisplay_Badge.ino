
#include "SSD1306_minimal.h"
#include <avr/pgmspace.h>
#include "Info1.h"
#include "Info2.h"
#include "Info3.h"
#include "Info4.h"
#include "Info5.h"

const int button = 4;                             //PB4
int buttonstate = LOW;




int menuState=0;

SSD1306_Mini oled;

void setup(){
  pinMode(button, INPUT);
  oled.init(0x3c);
  oled.clear();
  oled.startScreen();

}

void loop() {
  
    
    oled.cursorTo(0,0);
    oled.drawImage(info_11, 0,0, 128, 8);
    delay(50);
    //oled.clear();
    oled.drawImage(Info_22, 0,0, 128, 8);
    delay(50);
    //oled.clear();
    oled.drawImage(Info_33, 0,0, 128, 8);
    delay(50);
    //oled.drawImage(Info4, 0,0, 128, 8);
    //delay(50);
    //oled.drawImage(Info5, 0,0, 128, 8);
    //delay(50);
   
   
    //oled.drawImage(Info3, 0,0, 128, 8);
   }
