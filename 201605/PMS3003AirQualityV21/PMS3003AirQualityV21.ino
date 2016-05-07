/*
 This example demonstrate how to read pm2.5 value on PMS 3003 air condition sensor

 PMS 3003 pin map is as follow:
    PIN1  :VCC, connect to 5V
    PIN2  :GND
    PIN3  :SET, 0:Standby mode, 1:operating mode
    PIN4  :RXD :Serial RX
    PIN5  :TXD :Serial TX
    PIN6  :RESET
    PIN7  :NC
    PIN8  :NC

 In this example, we only use Serial to get PM 2.5 value.

 The circuit:
 * RX is digital pin 0 (connect to TX of PMS 3003)
 * TX is digital pin 1 (connect to RX of PMS 3003)

 */
#include "PMType.h"
#include <WiFi.h>


#include <Wire.h>  // Arduino IDE 內建
// LCD I2C Library，從這裡可以下載：
// https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads
#include <LiquidCrystal_I2C.h>

#include <SoftwareSerial.h>

uint8_t MacData[6];

SoftwareSerial mySerial(0, 1); // RX, TX
char ssid[] = "TSAO";      // your network SSID (name)
char pass[] = "1234";     // your network password
int keyIndex = 0;               // your network key Index number (needed only for WEP)

char gps_lat[] = "23.954710";  // device's gps latitude 清心福全(中正店) 510彰化縣員林市中正路254號
char gps_lon[] = "120.574482"; // device's gps longitude 清心福全(中正店) 510彰化縣員林市中正路254號
int status = WL_IDLE_STATUS;

#define pmsDataLen 24
uint8_t buf[pmsDataLen];
int idx = 0;
int pm25 = 0;
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // 設定 LCD I2C 位址
String MacAddress ;
  IPAddress Meip ;
  IPAddress Mesubnet ;
  IPAddress Megateway ;
void setup() {
  Serial.begin(9600);

  mySerial.begin(9600); // PMS 3003 UART has baud rate 9600
  lcd.begin(20, 4);      // 初始化 LCD，一行 20 的字元，共 4 行，預設開啟背光
       lcd.backlight(); // 開啟背光
WiFi.status();
MacAddress = GetWifiMac() ;
  ShowMac() ;
    initializeWiFi();
  ShowInternetStatus() ;


}

void loop() { // run over and over
  idx = 0;
  memset(buf, 0, pmsDataLen);

  while (mySerial.available()) 
    {
      buf[idx++] = mySerial.read();
    }

  // check if data header is correct
  if (buf[0] == 0x42 && buf[1] == 0x4d) 
      {
        pm25 = ( buf[12] << 8 ) | buf[13]; 
        Serial.print("pm2.5: ");
        Serial.print(pm25);
        Serial.println(" ug/m3");
        ShowPM(pm25) ;
      }

}

void ShowMac()
{
     lcd.setCursor(0, 0); // 設定游標位置在第一行行首
     lcd.print("MAC:");
     lcd.print(MacAddress);

}

void ShowInternetStatus()
{
     lcd.setCursor(0, 1); // 設定游標位置
        if (WiFi.status())
          {
               lcd.print("Connected:");
              lcd.print(Meip);
          }
       
}

void ShowPM(int pp25)
{
    lcd.setCursor(0, 3); // 設定游標位置在第一行行首
     lcd.print("PM2.5:");
     lcd.print(pp25);

}

 String GetWifiMac()
{
   String tt ;
    String t1,t2,t3,t4,t5,t6 ;
  WiFi.macAddress(MacData);
  
  Serial.print("Mac:");
   Serial.print(MacData[0],HEX) ;
   Serial.print("/");
   Serial.print(MacData[1],HEX) ;
   Serial.print("/");
   Serial.print(MacData[2],HEX) ;
   Serial.print("/");
   Serial.print(MacData[3],HEX) ;
   Serial.print("/");
   Serial.print(MacData[4],HEX) ;
   Serial.print("/");
   Serial.print(MacData[5],HEX) ;
   Serial.print("~");
   
   t1 = print2HEX((int)MacData[0]);
   t2 = print2HEX((int)MacData[1]);
   t3 = print2HEX((int)MacData[2]);
   t4 = print2HEX((int)MacData[3]);
   t5 = print2HEX((int)MacData[4]);
   t6 = print2HEX((int)MacData[5]);
 tt = (t1+t2+t3+t4+t5+t6) ;
Serial.print(tt);
Serial.print("\n");
  
  return tt ;
}

String  print2HEX(int number) {
  String ttt ;
  if (number >= 0 && number < 16)
  {
    ttt = String("0") + String(number,HEX);
  }
  else
  {
      ttt = String(number,HEX);
  }
  return ttt ;
}
String  print2digits(int number) {
  String ttt ;
  if (number >= 0 && number < 10)
  {
    ttt = String("0") + String(number);
  }
  else
  {
    ttt = String(number);
  }
  return ttt ;
}

String  print4digits(int number) {
  String ttt ;
  ttt = String(number);
  return ttt ;
}



void retrievePM25Value() {
  int idx;
  bool hasPm25Value = false;
  int timeout = 200;
  while (!hasPm25Value) {
    idx = 0;
    memset(buf, 0, pmsDataLen);
    while (mySerial.available()) {
      buf[idx++] = mySerial.read();
    }

    if (buf[0] == 0x42 && buf[1] == 0x4d) {
      pm25 = ( buf[12] << 8 ) | buf[13]; 
      Serial.print("pm2.5: ");
      Serial.print(pm25);
      Serial.println(" ug/m3");
      hasPm25Value = true;
    }
    timeout--;
    if (timeout < 0) {
      Serial.println("fail to get pm2.5 data");
      break;
    }
  }
}

void initializeWiFi() {
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
//    status = WiFi.begin(ssid, pass);
    status = WiFi.begin(ssid);

    // wait 10 seconds for connection:
    delay(10000);
  }


}


void printWifiData() 
{
  // print your WiFi shield's IP address:
  Meip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(Meip);


  // print your MAC address:
  byte mac[6];
  WiFi.macAddress(mac);
  Serial.print("MAC address: ");
  Serial.print(mac[5], HEX);
  Serial.print(":");
  Serial.print(mac[4], HEX);
  Serial.print(":");
  Serial.print(mac[3], HEX);
  Serial.print(":");
  Serial.print(mac[2], HEX);
  Serial.print(":");
  Serial.print(mac[1], HEX);
  Serial.print(":");
  Serial.println(mac[0], HEX);

  // print your subnet mask:
  Mesubnet = WiFi.subnetMask();
  Serial.print("NetMask: ");
  Serial.println(Mesubnet);

  // print your gateway address:
  Megateway = WiFi.gatewayIP();
  Serial.print("Gateway: ");
  Serial.println(Megateway);
}
