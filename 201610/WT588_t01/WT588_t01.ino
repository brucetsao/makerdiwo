int addrpin=7;
int busypin=8;
char addr;
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






void setup()
{
  
pinMode(addrpin, OUTPUT);
}


void loop()
{
  delay(2000);
  addr=0;
  
  PlayVoice(addr,addrpin);
  pulseIn(busypin,0);
pulseIn(busypin,1);
delay(5000);
addr=1;
PlayVoice(addr,addrpin);
  pulseIn(busypin,0);
pulseIn(busypin,1);

}
