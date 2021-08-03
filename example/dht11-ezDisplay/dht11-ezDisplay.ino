#include "SSD1306_minimal.h"
#include <avr/pgmspace.h>
#include "DHT.h"

#define DHTPIN 1     // what pin we're connected to
dht _dht;

SSD1306_Mini oled;

void setup() {
  oled.init(0x3c);
  oled.clear();
  oled.startScreen();
  oled.cursorTo(45, 0);
  oled.printString( "Attiny85");
  oled.cursorTo(0, 1);
  oled.printString("Temp: ");
  oled.cursorTo(0, 3);
  oled.printString("Humidity: ");
}


void loop() {
  delay(1000);
  char temp[16];
  oled.cursorTo(115, 1);
  int chk =  _dht.read11(1);
  itoa((int)_dht.temperature, temp, 10);
  oled.printString(temp);
  char hum[16];
  oled.cursorTo(115, 3);
  itoa((int)_dht.humidity, hum, 10);
  oled.printString(hum);
}
