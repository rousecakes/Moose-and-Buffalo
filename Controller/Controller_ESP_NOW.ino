#include <button.h>
#include <WiFi.h>                             // For connecting ESP32 to WiFi
#include <esp_now.h>                          // For talking with input controller

/** ESP NOW Related Items **/
#define CHANNEL_ESPNOW 1                      // Setting Wifi Channel to controller communication
esp_now_peer_info_t slave;                    // This is the data about the peer
uint8_t data = 0;                             // This is the all important data; same as "newData" variable on receiver [uint/char/etc]

/** Button Related Items **/
Button btn1;                                  // Moose 1
Button btn2;                                  // Moose 2
Button btn3;                                  // Moose 3
Button btn4;                                  // Bison 1
Button btn5;                                  // Bison 2
Button btn6;                                  // Bison 3
Button btn7;                                  // Moose and Bison 1
Button btn8;                                  // Moose and Bison 2
Button btn9;                                  // Moose and Bison 3
Button btn10;                                 // Quit Animation
Button btn11;                                 // Volume Up
Button btn12;                                 // Volume Down

void setup() {
  Serial.begin(115200);
  ESPNOWSetup();
  ButtonSetup();
}

void loop() {
  ButtonHandle();
  if (data != 0) {
    esp_now_send(slave.peer_addr, &data, sizeof(data));
    data = 0;
  }  
}
