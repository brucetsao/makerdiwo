
#define turnon HIGH
#define turnoff LOW


byte rows[8] = {9, 14, 8, 12, 1, 7, 2, 5};
byte cols[8] = {13, 3, 4, 10, 6, 11, 15, 16};
//byte Pins[16] = {5, 4, 3, 2, 14, 15, 16, 17, 13, 12, 11, 10, 9, 8, 7, 6};
byte Pins[16] ={22,24, 26, 28, 30, 32,34,36,38,40,42,44,46,48,50,52}; 
byte screen[8] = {0, 0, 0, 0, 0, 0, 0, 0};

void setup() {
  for (int i = 0; i <= 15; i++)
      {
          PinMode(Pins[i], OUTPUT);
          digitalWrite(Pins[i],turnoff);
      }
      delay(1000);
     
      for (int i = 0; i <= 7; i++)
        {
            digitalWrite(Pins[rows[i]-1],turnon);
            delay(1000);
        }
   
    
    //for (i=1;i<=8, i++)
}


void loop() {
 // digitalWrite(4,HIGH);
}

