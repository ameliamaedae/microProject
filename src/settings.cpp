#include "settings.h"
#include "common.h"

settings Settings;

void settingsInit(){

    Serial.println("INITALIZING SETTINGS");

    Settings.wifi_ssid = "DCT_GUESTS";
    Settings.wifi_passwd = "";

    Settings.mqtt_entity_name = "Placeholder";
    Settings.mqtt_passwd = "";
    Settings.mqtt_server = "";
    Settings.mqtt_username = "";
}