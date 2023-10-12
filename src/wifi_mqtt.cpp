#include "common.h"

void wifi_con(){
    WiFi.begin(Settings.wifi_ssid, Settings.wifi_passwd);
}

void mqtt_con(){
    WiFi.begin(Settings.wifi_ssid, Settings.wifi_passwd);
}