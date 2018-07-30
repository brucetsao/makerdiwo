int buzzer=11;//設置控制蜂鳴器的數位IO腳
void setup() 
{ 
pinMode(buzzer,OUTPUT);//設置數位IO腳模式，OUTPUT為轀出 
} 
void loop() 
{ 
unsigned char i,j;//定義變數
while(1) 
{ 
for(i=0;i<80;i++)//轀出一個頻率的聲音
{ 
digitalWrite(buzzer,HIGH);//發聲音
delay(1);//延時1ms 
digitalWrite(buzzer,LOW);//不發聲音
delay(1);//延時ms 
} 
for(i=0;i<100;i++)//轀出另一個頻率癿聲音 
{ 
digitalWrite(buzzer,HIGH);//發聲音
delay(2);//延時2ms 
digitalWrite(buzzer,LOW);//不發聲音
delay(2);//延時2ms 
} 
} 
}

