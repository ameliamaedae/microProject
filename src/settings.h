#ifndef _SETTINGS_H_
#define _SETTINGS_H_
    void settingsInit();
    class settings {
    public: 
       const char* wifi_ssid;
       const char* wifi_passwd;

       const char* mqtt_server;
       const char* mqtt_username;
       const char* mqtt_passwd;
       const char* mqtt_entity_name;
};

#endif