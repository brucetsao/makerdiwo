#include <LiquidCrystal.h>
#include <SPI.h>
#include <RFID.h>
#include <String.h>
#define openkeyPin 4
int debugmode = 0; 
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
String keyno1 = String("6AE4E616");


void setup()
{
  Serial.begin(9600);
  Serial.println("RFID Mifare Read");
    SPI.begin(); 
  rfid.init();
  pinMode(openkeyPin,OUTPUT);
  digitalWrite(openkeyPin,LOW);
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
  if (rfid.isCard()) {                                     //找尋卡片
          if (rfid.readCardSerial()) {                       //取得卡片的ID+CRC校驗碼
                        //第0~3個byte:卡片ID
                        Serial.println(" ");
                        Serial.print("RFID Card Number is : ");
      Serial.print(strzero(rfid.serNum[0],2,16));
                        Serial.print("/");
      Serial.print(rfid.serNum[0],HEX);
                        Serial.print("/");
      Serial.print(rfid.serNum[0],DEC);
                        Serial.print(" , ");
      Serial.print(strzero(rfid.serNum[1],2,16));
                        Serial.print("/");
      Serial.print(rfid.serNum[1],HEX);
                        Serial.print("/");
      Serial.print(rfid.serNum[1],DEC);
                        Serial.print(" , ");
      Serial.print(strzero(rfid.serNum[2],2,16));
                        Serial.print("/");
      Serial.print(rfid.serNum[1],HEX);
                        Serial.print("/");
      Serial.print(rfid.serNum[1],DEC);
                        Serial.print(" , ");
      Serial.print(strzero(rfid.serNum[3],2,16));
                        Serial.print("/");
      Serial.print(rfid.serNum[0],HEX);
                        Serial.print("/");
      Serial.println(rfid.serNum[0],DEC);
                        //第4個byte:CRC校驗位元
                       Serial.print("CRC is : ");
                       Serial.print(strzero(rfid.serNum[4],2,16));
                        Serial.print("/");
      Serial.print(rfid.serNum[4],HEX);
                        Serial.print("/");
      Serial.println(rfid.serNum[4],DEC);
                       lcd.setCursor(2, 1); 
                       lcd.print(strzero(rfid.serNum[0],2,16)); 
                       lcd.setCursor(5, 1); 
                       lcd.print(strzero(rfid.serNum[1],2,16)); 
                       lcd.setCursor(8, 1); 
                       lcd.print(strzero(rfid.serNum[2],2,16)); 
                       lcd.setCursor(11, 1); 
                       lcd.print(strzero(rfid.serNum[3],2,16)); 
                       lcd.setCursor(4, 2); 
                       lcd.print(getcardnumber(rfid.serNum[0],rfid.serNum[1],rfid.serNum[2],rfid.serNum[3]) ); 
                        
          }
          
    }   
    rfid.halt();        //命令卡片進入休眠狀態
    if (keyno1 == getcardnumber(rfid.serNum[0],rfid.serNum[1],rfid.serNum[2],rfid.serNum[3]))
      {
            digitalWrite(openkeyPin,HIGH);
            lcd.setCursor(0, 3); 
           lcd.print("Access Granted:Open"); 
           Serial.println("Access Granted:Door Open"); 
      }
      else
      {
            digitalWrite(openkeyPin,LOW);
            lcd.setCursor(0, 3); 
           lcd.print("Access Denied:Closed"); 
           Serial.println("Access Denied:Door Closed"); 
      }
      
            
    delay(500);         //延時0.5秒
}

String getcardnumber(byte c1, byte c2, byte c3, byte c4)
{
   String retstring = String("");
    retstring.concat(strzero(c1,2,16));
    retstring.concat(strzero(c2,2,16));
    retstring.concat(strzero(c3,2,16));
    retstring.concat(strzero(c4,2,16));
    return retstring;
}

String strzero(long num, int len, int base)
{
  String retstring = String("");
  int ln = 1 ;
    int i = 0 ; 
    char tmp[10] ;
    long tmpnum = num ;
    int tmpchr = 0 ;
    char hexcode[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'} ;
    while (ln <= len)
    {
        tmpchr = (int)(tmpnum % base) ;
        tmp[ln-1] = hexcode[tmpchr] ;
        ln++ ;
         tmpnum = (long)(tmpnum/base) ;
/*
        Serial.print("tran :(");
        Serial.print(ln);
        Serial.print(")/(");
        Serial.print(hexcode[tmpchr] );
        Serial.print(")/(");
        Serial.print(tmpchr);
        Serial.println(")");
        */
        
    }
    for (i = len-1; i >= 0 ; i --)
      {
          retstring.concat(tmp[i]);
      }
    
  return retstring;
}

unsigned long unstrzero(String hexstr)
{
  String chkstring  ;
  int len = hexstr.length() ;
  if (debugmode == 1)
      {
          Serial.print("String ");
          Serial.println(hexstr);
          Serial.print("len:");
          Serial.println(len);
      }
    unsigned int i = 0 ;
    unsigned int tmp = 0 ;
    unsigned int tmp1 = 0 ;
    unsigned long tmpnum = 0 ;
    String hexcode = String("0123456789ABCDEF") ;
    for (i = 0 ; i < (len ) ; i++)
    {
  //     chkstring= hexstr.substring(i,i) ; 
      hexstr.toUpperCase() ;
           tmp = hexstr.charAt(i) ;   // give i th char and return this char
           tmp1 = hexcode.indexOf(tmp) ;
      tmpnum = tmpnum + tmp1* POW(16,(len -i -1) )  ;
 
      if (debugmode == 1)
      {
            Serial.print("char:( ");
          Serial.print(i);
            Serial.print(")/(");
          Serial.print(hexstr);
            Serial.print(")/(");
          Serial.print(tmpnum);
            Serial.print(")/(");
          Serial.print((long)pow(16,(len -i -1)));
            Serial.print(")/(");
          Serial.print(pow(16,(len -i -1) ));
            Serial.print(")/(");
          Serial.print((char)tmp);
            Serial.print(")/(");
          Serial.print(tmp1);
            Serial.print(")");
            Serial.println("");
      }
    }
  return tmpnum;
}

long POW(long num, int expo)
{
  long tmp =1 ;
  if (expo > 0)
  { 
        for(int i = 0 ; i< expo ; i++)
          tmp = tmp * num ;
         return tmp ; 
  } 
  else
  {
   return tmp ; 
  }
}

