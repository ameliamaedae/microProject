#include "main.h"

void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
  Serial.println("");
  settingsInit(); // Initialize Settings
  wifi_con(); // Initialize wifi connection
  mqtt_con(); // Initialize mqtt connection
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("We are in the loop function");
  delay(5000);
  client.publish("Basement/Humidity", "resultRH");
}