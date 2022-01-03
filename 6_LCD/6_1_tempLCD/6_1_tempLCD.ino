#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <DHT_U.h>

int pin = 12;
DHT dht(pin, DHT11);
LiquidCrystal_I2C lcd(0x20, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  dht.begin();
}


void loop() { 
  float temp, humi;
  temp = dht.readTemperature();
  humi = dht.readHumidity();
  

  lcd.setCursor(0,0);
  lcd.print("temp : ");
  lcd.print(temp);
  lcd.setCursor(0,1);
  lcd.print("humi : ");
  lcd.print(humi);
  
  delay(1000);
  lcd.clear();
}
