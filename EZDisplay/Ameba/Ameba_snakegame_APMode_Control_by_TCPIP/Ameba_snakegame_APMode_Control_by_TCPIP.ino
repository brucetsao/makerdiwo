#include <String.h>    // Use String object
#include <WiFi.h>      // Use wifi 
#include "control.h"
/* AP Mode */
//-------------------------------------
IPAddress  Meip ,Megateway ,Mesubnet ;  //get network parameter
WiFiServer server(80);

void ShowMac()
{
  
     Serial.print("MAC:");
     Serial.print(MacAddress);
     Serial.print("\n");

}

String GetWifiMac()
{
   String tt ;
    String t1,t2,t3,t4,t5,t6 ;
    WiFi.status();    //this method must be used for get MAC
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
 tt.toUpperCase() ;
Serial.print(tt);
Serial.print("\n");
  
  return (tt) ;
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

void printWifiData() 
{
  // print your WiFi shield's IP address:
  Meip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(Meip);
  Serial.print("\n");

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

void ShowInternetStatus()
{
    
        if (WiFi.status())
          {
               Meip = WiFi.localIP();
               Serial.print("Get IP is:");
               Serial.print(Meip);
               Serial.print("\n");
              
          }
          else
          {
                       Serial.print("DisConnected:");
                       Serial.print("\n");
          }

}

void initializeWiFi() {
   String SSIDName = String("AMEBA")+MacAddress.substring(6,11) ;
 //  stringcpy(SSIDName.toUpperCase(),&ssid[0]) ;
  stringcpy(SSIDName,&ssid[0]) ;
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
   status = WiFi.apbegin(ssid, pass, channel);
  //   status = WiFi.begin(ssid);

    // wait 10 seconds for connection:
    delay(10000);
  }
  Serial.print("\n Success to connect AP:") ;
  Serial.print(ssid) ;
  Serial.print("\n") ;
  

}

void stringcpy(String srcchar, char *tarchar)
{
      for (int i = 0 ; i < srcchar.length(); i++)
          {
              *(tarchar+i) = srcchar.charAt(i);
              
          }

}

void strcpy(char *srcchar, char *tarchar, int len)
{
      for (int i = 0 ; i < len; i++)
          {
              *(tarchar+i) = *(srcchar+i);
              
          }

}
/* LED Matrix Command */
//-------------------------------
void StringWrite_AT_Command(String string){
  mySerial.print(string);
  while (mySerial.read() != 'E') {}
  delay(2);
  
}

void initATMode(){
  mySerial.write(0xf6);
  mySerial.write(0x01);
  delay(200);
}

/* Game function*/
void Score() {
  if (eatfood == true) {
    eatfood = false;
    GenFood();
 
    score++;
    snake_len++;
    rychlost -= 20;
    
    //Serial.print ("len: ");
    //Serial.println (snake_len);
    Serial.print ("score: ");
    Serial.println (score);
    
  }
}
 
void Display(int matrix[8][8], byte x, byte y) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if ((matrix[i][j] >= 1) || ((i == x) && (j == y) )) {
        StringWrite_AT_Command("AT9e=("+String(i+45)+","+String(j+13)+")");
      }
      
    }
  }
}

 
void VymazHada(int matice[8][8]) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (matice[i][j] == (clocktick - score)) {
        matice[i][j] = 0;
        StringWrite_AT_Command("AT9f=("+String(i+45)+","+String(j+13)+")");
        }
      }
    }
  }

 
void Pohyb() {
  switch (smer) {
    case 0:
      xHad++;
      break;
    case 1:
      xHad--;
      break;
    case 2:
      yHad--;
      break;
    case 3:
      yHad++;
      break;
  }
  if (xHad == 8) xHad = 0;
  if (yHad == 8) yHad = 0;
  if (xHad == 255) xHad = 7;
  if (yHad == 255) yHad = 7;
}
 
void GenFood() {
  StringWrite_AT_Command("AT9f=("+String(xPotrava+45)+","+String(yPotrava+13)+")");
  do {
    xPotrava = random(0, 8);
    yPotrava = random(0, 8);
  } while (had[xPotrava][yPotrava] != 0 );
}
 
void GameOver() {
  Serial.println ("Game over");
 
  StringWrite_AT_Command("ATd0=()"); // clear display
  TextMove_to_right("GAME OVER");
  StringWrite_AT_Command("AT81=(3,7,Score:"+String(score)+")");
}



 void ScreenAnimate(){
  
  for (int row = 0; row < 30; row=row+5) {
    for (int col = 0; col < 96; col=col+10) {
      StringWrite_AT_Command("AT92=("+String(col)+","+String(row)+","+String(col+5)+","+String(row+5)+",1)");  //print square 1
      StringWrite_AT_Command("AT92=("+String(col+3)+","+String(row)+","+String(col+8)+","+String(row+5)+",1)");  //print square 1
      
      delay(15);
    }
  }

  for (int row = 0; row < 30; row=row+5) {
    for (int col = 0; col < 96; col=col+10) {
      StringWrite_AT_Command("AT92=("+String(col)+","+String(row)+","+String(col+5)+","+String(row+5)+",0)");  //print square 0
      StringWrite_AT_Command("AT92=("+String(col+3)+","+String(row)+","+String(col+8)+","+String(row+5)+",0)");  //print square 1
      
      delay(15);
    }
  }
  
 }
//------------main
void setup() {
  Serial.begin(9600) ;
     MacAddress = GetWifiMac() ; // get MacAddress
    ShowMac() ;       //Show Mac Address
    initializeWiFi();
      server.begin();
    printWifiData() ;
   
    delay(2000) ;   //wait 2 seconds

//--game
  Serial.println("START Snake Game");
  mySerial.begin(115200);
  initATMode();
  StringWrite_AT_Command("ATd0=()"); // clear display
  delay(20);
  ScreenAnimate();
  TriangleFrame();
  TextMove_to_right("  START ");
  StringWrite_AT_Command("ATd0=()"); // clear display
  delay(20);
  StringWrite_AT_Command("AT91=(44,12,53,21,1)"); //Draw a play zone (square)
}

void Up(Pos *nowp)
{
    if (nowp->y > bound_y1){  
      nowp->y --;
      
      Serial.print("y:");
      Serial.println(nowp->y);
      nowp->isUpdated = true ;
      Serial.print("nowp.isUpdated:");
      Serial.println(nowp->isUpdated);
      //delay(20);
      
    }
}

void Down(Pos *nowp)
{
    if (nowp->y < bound_y2){  
      nowp->y++;
       Serial.print("y:");
      Serial.println(nowp->y);
      nowp->isUpdated = true ;
      Serial.print("nowp.isUpdated:");
      Serial.println(nowp->isUpdated);
      //delay(20);
    }
}

void Left(Pos *nowp)
{
    if (nowp->x > bound_x1){  
      nowp->x--;
      Serial.print("x:");
      Serial.println(nowp->x);
      nowp->isUpdated = true ;
      Serial.print("nowp.isUpdated:");
      Serial.println(nowp->isUpdated);
      //delay(20);
    }
}

void Right(Pos *nowp)
{
    if (nowp->x < bound_x2){  
      nowp->x++;
      Serial.print("x:");
      Serial.println(nowp->x);
      nowp->isUpdated = true ;
      Serial.print("nowp.isUpdated:");
      Serial.println(nowp->isUpdated);
      //delay(20);
    }
}

void Draw(Pos nowp)
{
  
  StringWrite_AT_Command("AT9e=("+String(nowp.x)+","+String(nowp.y)+")");
  Serial.print("Draw:");
  Serial.println(String(nowp.x)+","+String(nowp.y));
  
}



void Erase(Pos nowp)
{
  StringWrite_AT_Command("AT9f=("+String(nowp.x)+","+String(nowp.y)+")");
  Serial.print("Erase:");
  Serial.println(String(nowp.x)+","+String(nowp.y));
}

void GenFood(Pos *nowp)
{
  if (eatFood == true)
  {
    eatFood = false;
    randNum = random(bound_x1,bound_x2);
    nowp->x = randNum;
    nowp->y = randNum;
  }
}

void loop()
{
  WiFiClient client = server.available();
  readok = false ;
  StringWrite_AT_Command("AT81=(0,0,Wating for player)");
  if (client)
  {
  
    Serial.println("Now Someone Access WebServer");
    Serial.println("new client");
    // an http request ends with a blank line
    boolean currentLineIsBlank = true;

    while (client.connected())
      {
          StringWrite_AT_Command("AT81=(0,0,Player1)");  
             if (client.available()>0)
             {
                        btstring = client.readStringUntil(0x0a);
                        //btchar = client.read();
                        delay(50);
                        Serial.print("btstring:"); 
                        Serial.println(btstring) ;

                  //tempPosition.x = nowPosition.x;
                  //tempPosition.y = nowPosition.y;
                  //test game
                  //Serial.println("before VymazHada, clocktick-score= "+String(clocktick - score));
                  
                  //control snake
                  if (btstring == "L") 
                  {
                    smer = 1;
                  } 
                  else if (btstring == "R") 
                  {
                    smer = 0;
                  }
                  else if (btstring == "U") 
                  {
                    smer = 2;
                  }
                  else if (btstring == "D") 
                  {
                    smer = 3;
                  }      
                    VymazHada(had);
                    Score();
                    Pohyb(); //move had
                    if (xHad == xPotrava && yHad == yPotrava) eatfood = true;
                      if (had[xHad][yHad] != 0) GameOver();
                      
                    //Serial.println("clocktick="+String(clocktick));
                    clocktick++;   //clock tick
                    //Serial.println("ticked, clocktick="+String(clocktick));
                    had[xHad][yHad] = clocktick;
                    //Serial.println("set had["+String(xHad)+"]["+String(yHad)+"]="+String(clocktick));
                   Display(had, xPotrava, yPotrava);  //set led
               
                    //end test game
            }    // end of client.available()
                  
            


            
      }  //end  of while (client.connected())

 
    }   //end of   if (client)


   //    delay(800) ;
  //  free(client);


  
  
}


/* Opening Animation */
void TriangleFrame()
{
  for (int i = 0; i <= 95 ; i=i+10)
  {
     //StringWrite_AT_Command("AT95=("+String(i)+",1,5,1)");
     //StringWrite_AT_Command("AT95=("+String(i)+",30,5,1)");
     StringWrite_AT_Command("AT98=("+String(i)+",5,5,1)");  //downtri, peak is origin
     StringWrite_AT_Command("AT97=("+String(i)+",26,5,1)"); //uptri, peak is origin
  }
}


void TextMove_to_right(String string)
{
    
    StringWrite_AT_Command("AT83=(1,0,"+string+"!!)");
    delay(100);
    StringWrite_AT_Command("ATd9=(0,10,100,23, 80)");
}

