#include <String.h>
char ssid[12] ="AMEBA"   ;  // your network SSID (name)
char pass[9] = "12345678";     // your network password
char channel[] = "1";
uint8_t MacData[6];           // get mac address
String MacAddress ;
int status = WL_IDLE_STATUS;   // wifi status
String ReadStr = "" ;// recive data
int delayval = 500; // delay for half a second
int count = 0 ;
  boolean readok = false ;
  unsigned long strtime ;
//Game control 
unsigned char btchar ;
String btstring;
struct Pos {
  int x;
  int y;
  boolean isUpdated;
} ;
Pos nowPosition = { 48 , 15 , false };
Pos tempPosition = { 0 , 0 , false };

int bound_x1 = 45;
int bound_y1 = 13;
int bound_x2 = 52;
int bound_y2 = 20;
int HHeight = 8;
int WWidth = 8;

long randNum = 5;
Pos foodPosition = {randNum, randNum, false};
boolean eatFood = false;
//-----Control Display Use-----

#include <SoftwareSerial.h>
const byte rxPin = 0;
const byte txPin = 1;
SoftwareSerial mySerial (rxPin, txPin);
String incomingByte;   // for incoming serial data
int had[8][8] = {0};
byte xHad = 4;
byte yHad = 5;
byte xPotrava = 0;
byte yPotrava = 0;
int snake_x = {0};
int snake_y = {0};
int snake_len = 1;
byte smer = 0;
int clocktick = 1;
long CasZmeny = 0;
int rychlost = 500;
byte score = 0;
boolean eatfood = false;
boolean zvuk = true;
boolean probehlo = false;
//  Screen Data
int Cislo[11][7] = {
  {B00000000,B00000000,B00000000,B00000000,B00000001,B01111111,B00100001}, //1
  {B00000000,B00000000,B00110001,B01001001,B01000101,B00100011},//2
  {B00000000,B00000000,B01000110,B01101001,B01010001,B01000001,B01000010},//3
  {B00000000,B00001000,B11111111,B01001000,B00101000,B00011000,B00001000},//4
  {B00000000,B00000000,B00111110,B01000101,B01001001,B01010001,B00111110}, //5
  {B00000000,B00000000,B00000110,B01001001,B01001001,B00101001,B00011110}, //6
  {B00000000,B00000000,B01110000,B01001000,B01000111,B01000000,B01100000}, //7
  {B00000000,B00000000,B00110110,B01001001,B01001001,B01001001,B00110110}, //8
  {B00000000,B00000000,B00111100,B01001010,B01001001,B01001001,B00110000}, //9
  {B00000000,B00000000,B00111110,B01010001,B01001001,B01000101,B00111110}, //0
  {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000}, //mezera
  };

