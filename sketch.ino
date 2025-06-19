#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <RTClib.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
#define BUZZER 3
#define TEMP_THRESHOLD 30 // you can adjust this

DHT dht(DHTPIN, DHTTYPE);
RTC_DS1307 rtc;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
  dht.begin();
  rtc.begin();
  pinMode(BUZZER, OUTPUT);
  lcd.print("Initializing...");
  delay(2000);
}

void loop() {
  float temperature = dht.readTemperature();
  DateTime now = rtc.now();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print(now.hour());
  lcd.print(":");
  lcd.print(now.minute());

  if (temperature > TEMP_THRESHOLD) {
    digitalWrite(BUZZER, HIGH);
    lcd.setCursor(10, 1);
    lcd.print("ALERT");
  } else {
    digitalWrite(BUZZER, LOW);
  }

  delay(2000);
}
