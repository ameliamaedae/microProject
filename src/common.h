#ifndef _COMMON_H_
#define _COMMON_H_

    #include <Arduino.h>
    #include <PubSubClient.h>
    #include <ESP8266WiFi.h>
    #include "settings.h"
    #include "wifi_mqtt.h"

    extern settings Settings;
    extern WiFiClient wifiC;
    extern PubSubClient client;

#endif