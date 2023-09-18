#include "DHT.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 2
#define DHTTYPE DHT11

LiquidCrystal_I2C lcd(0x27,16,2);
float tempF;
float tempC;
float humidity;
int dt=1000;
String cmd;
DHT TH(DHTPIN,DHTTYPE);
void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  TH.begin();
}

void loop() {
  tempF=TH.readTemperature(true);
  tempC=TH.readTemperature();
  humidity=TH.readHumidity();
  
  
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" Temperature ");
  Serial.print(tempC);
  Serial.print(" C ");
  Serial.print(tempF);
  Serial.println(" F ");

  lcd.setCursor(0,0);
  lcd.print("Humidity(%):");
  lcd.setCursor(0,1);
  lcd.print(humidity);
  delay(1500);

  lcd.setCursor(0,0);
  lcd.print("Temperature(C):");
  lcd.setCursor(0,1);
  lcd.print(tempC);
  delay(1500);

  lcd.setCursor(0,0);
  lcd.print("Temperature(F):");
  lcd.setCursor(0,1);
  lcd.print(tempF);
  delay(1500);
  lcd.clear();
  
}
