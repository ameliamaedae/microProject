#include "main.h"

void setup() {
  settingsInit(); // Initialize Settings
  Serial.begin(9600);
  Serial.println("");
  wifi_con(); // Initialize wifi connection
  mqtt_con(); // Initialize mqtt connection
}

void loop() {
  // Reconnects Start
  if (!WiFi.isConnected()){
    wifi_con(); 
  }
  if (!client.connected()){
    mqtt_con();
  }
  // Reconnects End

  Serial.println("We are in the loop function");

  // Sensor Readings Start
  float t = sht31.readTemperature();
  float h = sht31.readHumidity();

  t = (t * 9/5) + 32;
  char resultTemp[5];
  dtostrf(t, 6, 2, resultTemp);
  client.publish("Basement/Temp", resultTemp);

  char resultRH[2];
  dtostrf(h, 6, 2, resultRH);
  client.publish("Basement/Humidity", resultRH);
  // Sensor Readings End


  delay(5000);

}