/*********************************************************************
This is an example sketch for our Monochrome Nokia 5110 LCD Displays

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/products/338

These displays use SPI to communicate, 4 or 5 pins are required to
interface

Adafruit invests time and resources providing this open source code,
please support Adafruit and open-source hardware by purchasing
products from Adafruit!

Written by Limor Fried/Ladyada  for Adafruit Industries.
BSD license, check license.txt for more information
All text above, and the splash screen must be included in any redistribution
*********************************************************************/

#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#define PIN_SCE   7
#define PIN_RESET 6
#define PIN_DC    5
#define PIN_SDIN  4
#define PIN_SCLK  3

// Software SPI (slower updates, more flexible pin options):
//=== old version pin out======
// pin 7 - Serial clock out (SCLK)
// pin 6 - Serial data out (DIN)
// pin 5 - Data/Command select (D/C)
// pin 4 - LCD chip select (CS)
// pin 3 - LCD reset (RST)
Adafruit_PCD8544 display = Adafruit_PCD8544(PIN_SCLK, PIN_SDIN, PIN_DC, PIN_SCE, PIN_RESET);
// Adafruit_PCD8544 display = Adafruit_PCD8544(SCLK, DIN, D/C, CS/SCE, RST);


#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

  display.begin();      //init Nokia 5110 display
  // init done

  // you can change the contrast around to adapt the display
  // for the best viewing!
  display.setContrast(50);      //set Contrast
  display.clearDisplay();       //清除螢幕
  display.display(); // show splashscreen  //

// draw a single pixel
  display.drawPixel(10, 10, BLACK);
  display.drawPixel(10, 12, BLACK);
  display.drawPixel(10, 14, BLACK);
  display.drawPixel(10, 16, BLACK);
  display.drawPixel(10, 18, BLACK);
  display.drawPixel(10, 20, BLACK);
  display.drawPixel(14, 10, BLACK);
  display.drawPixel(14, 12, BLACK);
  display.drawPixel(14, 14, BLACK);
  display.drawPixel(14, 16, BLACK);
  display.drawPixel(14, 18, BLACK);
  display.drawPixel(14, 20, BLACK);
  display.drawPixel(18, 10, BLACK);
  display.drawPixel(18, 12, BLACK);
  display.drawPixel(18, 14, BLACK);
  display.drawPixel(18, 16, BLACK);
  display.drawPixel(18, 18, BLACK);
  display.drawPixel(18, 20, BLACK);
  display.drawPixel(22, 10, BLACK);
  display.drawPixel(22, 12, BLACK);
  display.drawPixel(22, 14, BLACK);
  display.drawPixel(22, 16, BLACK);
  display.drawPixel(22, 18, BLACK);
  display.drawPixel(22, 20, BLACK);
  display.display();    //顯示所有上面內容，必要在所有秀字命令後，一定要的
  delay(2000);

  
}

void loop() {
  // put your main code here, to run repeatedly:

}

