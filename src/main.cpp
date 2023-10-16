#include "main.h"

void setup() {
  // put your setup code here, to run once
  //Set LED to yellow =======
  Serial.begin(9600);
  Serial.println("");
  settingsInit(); // Initialize Settings
  wifi_con(); // Initialize wifi connection
  mqtt_con(); // Initialize mqtt connection
  //Set LED to green =======
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
  delay(5000);
  client.publish("testingGrounds", "Hello?");
}