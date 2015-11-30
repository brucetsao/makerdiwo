#include <HX711.h> // HX711　arduino library

#define datapin 8    //　讀取資料接腳
#define clockpin 9  //　讀取時脈接腳
HX711 hx(clockpin, datapin,128,0.0031977841);     // 產生Hx711　　物件


void setup() {
  Serial.begin(9600);
}


void loop()
{
  double sum = 0;    // 　　為了更加精準，　一次取出10　次，求平均值。
  for (int i = 0; i < 10; i++) // 　迴圈次數越多，精度也就越高
    sum += hx.read();  // 　累加值

  Serial.println(sum/10); // 求平均值

}

