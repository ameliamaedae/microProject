#include "settings.h"
#include "common.h"

settings Settings;

void settingsInit(){
    Settings.wifi_ssid = "TheMNet";
    Settings.wifi_passwd = "421E2E84A4";

    Settings.mqtt_entity_name = "";
    Settings.mqtt_passwd = "";
    Settings.mqtt_server = "";
    Settings.mqtt_username = "";
}