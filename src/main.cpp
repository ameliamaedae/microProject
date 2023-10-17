#include "main.h"

void setup() {
  // put your setup code here, to run once
  settingsInit(); // Initialize Settings
  Serial.begin(9600);
  Serial.println("");
  wifi_con(); // Initialize wifi connection
  mqtt_con(); // Initialize mqtt connection
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!WiFi.isConnected()){
    wifi_con(); 
  }
  if (!client.connected()){
    mqtt_con();
  }
  Serial.println("We are in the loop function");

  float t = sht31.readTemperature();
  float h = sht31.readHumidity();

  t = (t * 9/5) + 32;
  char resultTemp[5];
  dtostrf(t, 6, 2, resultTemp);
  client.publish("Basement/Temp", resultTemp);

  char resultRH[2];
  dtostrf(h, 6, 2, resultRH);
  client.publish("Basement/Humidity", resultRH);

  delay(5000);

}