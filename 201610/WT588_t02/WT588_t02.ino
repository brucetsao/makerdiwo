int addrpin=7;
int busypin=8;
char addr;

void setup()
{
pinMode(addrpin, OUTPUT);
Serial.begin(9600);
Serial.println("program Start here");
}


void loop()
{
  int aa ;
  char song;
   
  if (Serial.available())
  {
     aa =  Serial.read() ;

     song = (char)aa -0x30;
          Serial.print("now playing song #");
     Serial.println(song,HEX) ;
  PlayVoice(song,addrpin);
  }
//;
}
void PlayVoice(unsigned char addr,unsigned int addrpin)
{
digitalWrite(addrpin,0);
delay(5);
for(int i=0;i<8;i++)
{
digitalWrite(addrpin,1);
if(addr & 1)
{
delayMicroseconds(600);
digitalWrite(addrpin,0);
delayMicroseconds(300);
}
else
{
delayMicroseconds(300);
digitalWrite(addrpin,0);
delayMicroseconds(600);
}
addr>>=1;  //此行用>>=还是=>>还不确定
}
digitalWrite(addrpin,1);
}


/*用于播放由一串地址组成的语句*/
void PlayVoiceSerial(unsigned int addrserial[],unsigned int len,unsigned int addrpin,unsigned int busypin)
{
for(int i=0;i<len;i++)
{
addr=addrserial[i];
PlayVoice(addr,addrpin);
pulseIn(busypin,0);
pulseIn(busypin,1);
}
}


