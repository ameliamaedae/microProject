#include "common.h"

void wifi_con(){
    //Set LED to blue
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
    //Set LED to purple
    // WiFi.begin(Settings.wifi_ssid, Settings.wifi_passwd);
    Serial.println("MQTT_CON()");
    client.setServer(Settings.mqtt_server, 1883);
    while (!client.connected()) {
        client.connect(Settings.mqtt_entity_name, Settings.mqtt_username, Settings.mqtt_passwd);
        Serial.println("Attempting to connect to MQTT Broker");
        delay(100);
    }
    Serial.println("Connected to broker!");
}