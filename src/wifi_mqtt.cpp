#include "common.h"

void wifi_con(){
    // WiFi.begin(Settings.wifi_ssid, Settings.wifi_passwd);
    Serial.println("WIFI_CON()");
    Serial.println(Settings.wifi_ssid);
}

void mqtt_con(){
    // WiFi.begin(Settings.wifi_ssid, Settings.wifi_passwd);
    Serial.println("MQTT_CON()");
    Serial.println(Settings.mqtt_entity_name);
}

void wifi_recon(){
    
}

void mqtt_recon(){
    
}