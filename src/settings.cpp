#include "settings.h"
#include "common.h"

settings Settings;

WiFiClient wifiC;
PubSubClient client(wifiC);

void settingsInit(){

    Serial.println("INITALIZING SETTINGS");

    Settings.wifi_ssid = "";
    Settings.wifi_passwd = "";

    Settings.mqtt_entity_name = "";
    Settings.mqtt_passwd = "";
    Settings.mqtt_server = "";
    Settings.mqtt_username = "";
}