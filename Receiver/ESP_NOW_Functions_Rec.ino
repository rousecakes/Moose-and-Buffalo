/************************************************************************************************************

    ENTER the following Code into the Main .ino file

    ** Globals ** 
  #include <WiFi.h>                             // For connecting ESP32 to WiFi
  #include <esp_now.h>                          // For talking with input controller

  // ESP Now Related 
  #define CHANNEL_ESPNOW 1                      // Setting Wifi Channel to controller communication
  uint8_t newData;                              // Place to store the incoming data from the controller

    ** Setup **
  Serial.begin(115200);                       // Start Serial Monitor
  ESPNOWSetup();                              // Setup ESP Now Protocol for Wireless communication with controller

    ** Loop **
  ESPNOWHandle();                             // Handle incoming signals from Controller

***************************************************************************************************************/

void ESPNOWSetup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAP("RX_1", "RX_1_Password", CHANNEL_ESPNOW, 0);
  esp_now_init();
  esp_now_register_recv_cb(OnDataRecv);
}

void ESPNOWHandle() {
  //Serial.println(newData);
  if (newData != 0) {                                       // If new data Received....
    switch (newData) {                                          // Switch Case the incoming Data
      case 1: {                                                     // Case Data (1)
        Serial.println("Moose Button 1");                                   // Print to Serial Monitor
        animationFlag_1 = 1;                                                // Set Animation Flag (1) to On
        newData = 0;                                                        // Reset Data variable to NULL (0)
        break;                                                              // Leave Case
      }
      case 2: {
        Serial.println("Moose Button 2");
        animationFlag_2 = 1;
        newData = 0;
        break;
      }
      case 3: {
        Serial.println("Moose Button 3");
        animationFlag_3 = 1;
        newData = 0;
        break;
      }
      case 4: {
        Serial.println("Bison Button 1");
        animationFlag_4 = 1;
        newData = 0;
        break;
      }
      case 5: {
        Serial.println("Bison Button 2");
        animationFlag_5 = 1;
        newData = 0;
        break;
      }
      case 6: {
        Serial.println("Bison Button 3");
        animationFlag_6 = 1;
        newData = 0;
        break;
      }
      case 7: {
        Serial.println("Moose and Bison Button 1");
        animationFlag_7 = 1;
        newData = 0;
        break;
      }
      case 8: {
        Serial.println("Moose and Bison Button 2");
        animationFlag_8 = 1;
        newData = 0;
        break;
      }
      case 9: {
        Serial.println("Moose and Bison Button 3");
        animationFlag_9 = 1;
        newData = 0;
        break;
      }
      case 10: {
        Serial.println("Quit Animation");
        animationFlag_10 = 1;
        newData = 0;
        break;
      }
      case 11: {
        Serial.println("Volume Up");
        audioFlag_1 = 1;
        newData = 0;
        break;
      }
      case 12: {
        Serial.println("Volume Down");
        audioFlag_2 = 1;
        newData = 0;
        break;
      }
    }
  }
}

/** callback when data is sent from Master to Slave **/
void OnDataRecv(const uint8_t *mac_addr, const uint8_t *data, int data_len) {
  //Serial.print("I just received -> ");
  //Serial.println(*data);
  memcpy(&newData, data, sizeof(newData));
}
