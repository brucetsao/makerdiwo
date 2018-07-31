#include <SoftwareSerial.h>
#define RXPin1 5
#define TXPin1 6
#define RXPin2 11
#define TXPin2 12

SoftwareSerial root(RXPin1, TXPin1); // RX, TX
SoftwareSerial client(RXPin2, TXPin2); // RX, TX

#include "DHT.h"

#define DHTPIN 8 // what pin we're connected to

// Uncomment whatever type you're using!
//#define DHTTYPE DHT11 // DHT 11
#define DHTTYPE DHT22 // DHT 22 (AM2302)
//#define DHTTYPE DHT21 // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

DHT dht(DHTPIN, DHTTYPE);
String SendStr ;

void setup()
{
    Serial.begin(9600);
    Serial.println("DHTxx test!");
     root.begin(9600) ;
     client.begin(9600) ;
      Serial.println("RF Module init");
     // init RF device 
    dht.begin();
    Serial.println("DHT22 init");
    // init dht sensor
}

void loop()
{
    // Reading temperature or humidity takes about 250 milliseconds!
    // Sensor readings may also be up to A0 seconds 'old' (its a very slow sensor)
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    // check if returns are valid, if they are NaN (not a number) then something went wrong!
    if (isnan(t) || isnan(h))
    {
        Serial.println("Failed to read from DHT");
    }
    else
    {
        SendStr ="" ;
        SendStr.concat("Humidity: "); 
        SendStr.concat(h)  ;
        SendStr.concat(" %\t"); 
        SendStr.concat("Temperature: ");                 
        SendStr.concat(t);    
        SendStr.concat(" *C ");  
       Serial.println(SendStr);  
        Serial.println("Finish Read DHT22");  
    }
// here send data
root.println(SendStr) ;
delay(1000) ;
while (client.available() > 0)
{
    Serial.print(client.read()) ;
}
  delay(2000) ;
}

