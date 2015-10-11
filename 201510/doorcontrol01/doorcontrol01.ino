#include <LiquidCrystal.h>
#include <SPI.h>
#include <RFID.h>


/* LiquidCrystal display with:

LiquidCrystal(rs, enable, d4, d5, d6, d7) 
LiquidCrystal(rs, rw, enable, d4, d5, d6, d7) 
LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
LiquidCrystal(rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
R/W Pin Read = LOW / Write = HIGH   // if No Pin connect RW , please leave R/W Pin for Low State

Parameters
*/

LiquidCrystal lcd(8,9,10,38,40,42,44);   //ok
RFID rfid(53,5);       //this is used for Arduino Mega 2560
//RFID rfid(10,5);    //this is used for Arduino UNO


void setup()
{
  Serial.begin(9600);
  Serial.println("RFID Mifare Read");
    SPI.begin(); 
  rfid.init();
//  PinMode(11,OUTPUT);
//  digitalWrite(11,LOW);
lcd.begin(20, 4);
// 設定 LCD 的行列數目 (4 x 20)
 lcd.setCursor(0,0);
  // 列印 "Hello World" 訊息到 LCD 上 
lcd.print("RFID Mifare Read"); 
}

void loop()
{ 
// 將游標設到 column 0, line 1 
// (注意: line 1 是第二行(row)，因為是從 0 開始數起): 



 Serial.println(millis()/1000);
delay(200);
  if (rfid.isCard()) {                                     //找尋卡片
          if (rfid.readCardSerial()) {                       //取得卡片的ID+CRC校驗碼
                        //第0~3個byte:卡片ID
                        Serial.println(" ");
                        Serial.print("RFID Card Number is : ");
      Serial.print(rfid.serNum[0],HEX);
                        Serial.print(" , ");
      Serial.print(rfid.serNum[1],HEX);
                        Serial.print(" , ");
      Serial.print(rfid.serNum[2],HEX);
                        Serial.print(" , ");
      Serial.println(rfid.serNum[3],HEX);
                        //第4個byte:CRC校驗位元
                       Serial.print("CRC is : ");
                       Serial.println(rfid.serNum[4],HEX);
                       lcd.setCursor(2, 1); 
                       lcd.print(rfid.serNum[0],HEX); 
                       lcd.setCursor(5, 1); 
                       lcd.print(rfid.serNum[1],HEX); 
                       lcd.setCursor(8, 1); 
                       lcd.print(rfid.serNum[2],HEX); 
                       lcd.setCursor(11, 1); 
                       lcd.print(rfid.serNum[3],HEX); 
                        
          }
          
    }   
    rfid.halt();        //命令卡片進入休眠狀態
    delay(500);         //延時0.5秒
}



