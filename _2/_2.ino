#include <Wire.h>
#include <dht.h>
#define dht_dpin A0 
dht DHT;
const int SLAVE_ADDRESS = 1;
char h[2];
char t[2];#include <Wire.h>
#include <dht.h>
#define dht_dpin 2 
dht DHT;
const int SLAVE_ADDRESS = 1;
char h[2];
char t[2];
char p[7];
void setup()
{
  Serial.begin(9600);
  Wire.begin(SLAVE_ADDRESS); // join I2C bus as a slave with
  Wire.onRequest(requestEvent); // register event
}
void loop() 
{
  DHT.read11(dht_dpin);
  Serial.print("Humidity = "); 
  Serial.print(DHT.humidity);
  Serial.print("% ");
  Serial.print("temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C ");
  dtostrf(DHT.humidity,2,0,h);
  p[0] = h[0];
  p[1] = h[1];
  p[2] = '%';
  p[3] = ' ';
  dtostrf(DHT.temperature,2,0,t);
  p[4] = t[0];
  p[5] = t[1];
  p[6] = 'C';
  delay(1000);
}
void requestEvent() 
{
  Wire.write(p);
}

char p[7];
void setup()
{
  Serial.begin(9600);
  Wire.begin(SLAVE_ADDRESS); // join I2C bus as a slave with
  Wire.onRequest(requestEvent); // register event
}
void loop() 
{
  DHT.read11(dht_dpin);
  Serial.print("Humidity = "); 
  Serial.print(DHT.humidity);
  Serial.print("% ");
  Serial.print("temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C ");
  dtostrf(DHT.humidity,2,0,h);
  p[0] = h[0];
  p[1] = h[1];
  p[2] = '%';
  p[3] = ' ';
  dtostrf(DHT.temperature,2,0,t);
  p[4] = t[0];
  p[5] = t[1];
  p[6] = 'C';
  delay(1000);
}
void requestEvent() 
{
  Wire.write(p);
}

