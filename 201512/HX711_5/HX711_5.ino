#include <HX711.h> // HX711　arduino library
#include <LiquidCrystal.h>

#define datapin 10    //　讀取資料接腳
#define clockpin 11  //　讀取時脈接腳
HX711 hx(clockpin, datapin,128,0.0031977841);     // 產生Hx711　　物件
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int lcd_key = 0;
int adc_key_in = 0;
#define btnRIGHT 0
#define btnUP 1
#define btnDOWN 2
#define btnLEFT 3
#define btnSELECT 4
#define btnNONE 5

int read_LCD_buttons()
{
  adc_key_in = analogRead(0); // read the value from the sensor 
  // my buttons when read are centered at these valies: 0, 144, 329, 504, 741
  // we add approx 50 to those values and check to see if we are close
  if (adc_key_in > 1000) return btnNONE; // We make this the 1st option for speed reasons since it will be the most likely result
  // For V1.1 us this threshold
  if (adc_key_in < 50) return btnRIGHT; 
  if (adc_key_in < 250) return btnUP; 
  if (adc_key_in < 450) return btnDOWN; 
  if (adc_key_in < 650) return btnLEFT; 
  if (adc_key_in < 850) return btnSELECT; 
  // For V1.0 comment the other threshold and use the one below:
  /*
if (adc_key_in < 50) return btnRIGHT; 
   if (adc_key_in < 195) return btnUP; 
   if (adc_key_in < 380) return btnDOWN; 
   if (adc_key_in < 555) return btnLEFT; 
   if (adc_key_in < 790) return btnSELECT; 
   */
  return btnNONE; // when all others fail, return this...
}

void setup() {
  hx.set_offset(-13117.91613);

  Serial.begin(9600);
   hx.tare(50);  //在開始時候，取樣50次的皮重累加入系統
  lcd.begin(16, 2); // start the library
  lcd.setCursor(0,0);
 // lcd.print("Push the buttons"); // print a simple message
  
}
 

void loop() {
  int key ;
   delay(500);
   double sum0 = 0;
   double sum1 = 0;
   key = checkkey();
 if (key == 11)
{
    lcd.clear();
    lcd.setCursor(0,0); // move cursor to second line "1" and 9 spaces over
    lcd.print("tare .........");
    hx.tare(50);  //在開始時候，取樣50次的皮重累加入系統
    delay(1000);
} 
  for (int i = 0; i < 10; i++) {
     sum0 += hx.read();
     sum1 += hx.bias_read();
   }
   lcd.clear();
    lcd.setCursor(0,0); // move cursor to second line "1" and 9 spaces over
  lcd.print("ADC :"); // display adc value 去除小數位
  lcd.print((int)sum0/10); // display adc value 去除小數位
  lcd.print("  "); // display adc value 去除小數位
  lcd.print(key); // display adc value 去除小數位
  lcd.setCursor(0,1); // move to the begining of the second line
 lcd.print((int)sum1/10);  //去除小數位
 lcd.print("  g ");  //去除小數位
 lcd.print(sum1/10);  //去除小數位
 lcd.print("  g");  //去除小數位
 
  Serial.print(sum0/10);  //去除小數位
   Serial.print(" ");
   Serial.println((int)sum1/10);  //去除小數位
// checkkey();
 
}

int checkkey()
{
  lcd_key = read_LCD_buttons(); // read the buttons
  switch (lcd_key) // depending on which button was pushed, we perform an action
  {
  case btnRIGHT:
    {
      return 1 ;
      break;
    }
  case btnLEFT:
    {
        return 2 ;
      break;
    }
  case btnUP:
    {
        return 3 ;
      break;
    }
  case btnDOWN:
    {
        return 4 ;
      break;
    }
  case btnSELECT:
    {
        return 11 ;
      break;
    }
  case btnNONE:
    {
        return 0 ;
      break;
    }
  } 
} 
