#include "settings.h"
#include "common.h"

settings Settings;

WiFiClient wifiC;
PubSubClient client(wifiC);

Adafruit_SHT31 sht31 = Adafruit_SHT31();

void settingsInit(){

    Serial.println("INITALIZING SETTINGS");

    sht31.begin();
    sht31.heater(false);

    Settings.wifi_ssid = "";
    Settings.wifi_passwd = "";

    Settings.mqtt_entity_name = "";
    Settings.mqtt_server = "";
    Settings.mqtt_passwd = "";
    Settings.mqtt_username = "";
}