#include <DHT.h>
#include <DHT_U.h>

int pin=12;    // 연결한 아두이노 디지털 핀 번호
DHT dht(pin, DHT11);


void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
  float temp, humi;
  temp = dht.readTemperature();
  humi = dht.readHumidity();

  if(isnan(humi)|| isnan(temp)){
    Serial.println("Failed to read from DHT sensor!!");
    return;
    }

  Serial.print("온도 : ");
  Serial.print(temp);
  Serial.println("도씨");
  Serial.print("습도 : ");
  Serial.print(humi);
  Serial.println("%");
}
