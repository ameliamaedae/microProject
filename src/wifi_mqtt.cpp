#include "common.h"

void wifi_con(){
    Serial.println("WIFI_CON()");
    Serial.println(Settings.wifi_ssid);
    WiFi.setHostname(Settings.mqtt_entity_name);
    Serial.println("Attempting to connect");
        WiFi.begin(Settings.wifi_ssid, Settings.wifi_passwd);
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.println(".");
    }
    WiFi.setHostname(Settings.mqtt_entity_name);
    Serial.println("Connected!");
    Serial.print(WiFi.localIP());
    Serial.print(" - ");
    Serial.println(WiFi.hostname());
}

void mqtt_con(){
    // WiFi.begin(Settings.wifi_ssid, Settings.wifi_passwd);
    Serial.println("MQTT_CON()");
    client.setServer(Settings.mqtt_server, 1883);
    client.connect(Settings.mqtt_entity_name, Settings.mqtt_username, Settings.mqtt_passwd);
}

void wifi_recon(){
    Serial.println("WIFI_RECON()");
    Serial.println(Settings.wifi_ssid);
}

void mqtt_recon(){
    Serial.println("MQTT_RECON()");
    Serial.println(Settings.mqtt_entity_name);
    
}