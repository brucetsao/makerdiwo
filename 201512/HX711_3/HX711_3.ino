#include <HX711.h> // HX711　arduino library

#define datapin 8    //　讀取資料接腳
#define clockpin 9  //　讀取時脈接腳
HX711 hx(clockpin, datapin,128,0.0031977841);     // 產生Hx711　　物件

void setup() {
  hx.set_offset(-13117.91613);
  Serial.begin(9600);
 
}
 

void loop() {
   delay(500);
   double sum0 = 0;
   double sum1 = 0;
 
  for (int i = 0; i < 10; i++) {
     sum0 += hx.read();
     sum1 += hx.bias_read();
   }
 
  Serial.print(sum0/10);
   Serial.print(" ");
   Serial.println(sum1/10);
 
}
