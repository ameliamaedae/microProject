#include "main.h"

void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
  settingsInit();
  wifi_con();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Settings.wifi_ssid);
}