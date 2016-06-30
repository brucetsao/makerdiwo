#include <Adafruit_GFX.h>
#include <TouchScreen.h>
#include <Adafruit_TFTLCD.h>

//SPI Communication
#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0 
#define LCD_RESET A4 

//Color Definitons
#define BLACK   0x0000
#define WHITE   0xFFFF

#define BOXSIZE  40

Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);

void setup() {  
  Serial.begin(9600);

  tft.reset();  
  tft.begin();

  tft.fillScreen(BLACK);
  tft.drawRect(100, 100, BOXSIZE, BOXSIZE, WHITE);
}

void loop() {

}
