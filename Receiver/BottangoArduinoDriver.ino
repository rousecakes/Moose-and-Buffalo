// !!! DRIVER VERSION: 0.6.4a !!!
// !!! Api Version: 7 !!!

#include "src/BottangoCore.h"
#include "src/BasicCommands.h"
#include <WiFi.h>                             // For connecting ESP32 to WiFi
#include <esp_now.h>                          // For talking with input controller
#include "Adafruit_Soundboard.h"              // For using the Adafruit Sound FX board in UART

bool animationFlag_1 = 0;                       // Set Animation/Audio Flags to Off at start
bool animationFlag_2 = 0;
bool animationFlag_3 = 0;
bool animationFlag_4 = 0;
bool animationFlag_5 = 0;
bool animationFlag_6 = 0;
bool animationFlag_7 = 0;
bool animationFlag_8 = 0;
bool animationFlag_9 = 0;
bool animationFlag_10 = 0;
bool audioFlag_1 = 0;
bool audioFlag_2 = 0;

unsigned long currentTime = millis();         // Variable to store time
unsigned long lastTime;                       // Variable to store time
const unsigned long delayInterval = 2000;     // Delay interval set to 2 Seconds

/* ESP Now Related */
#define CHANNEL_ESPNOW 1                      // Setting Wifi Channel to controller communication
uint8_t newData;                              // Place to store the incoming data from the controller

/*Adafruit Sound FX Related */
#define SFX_TX 16                             // Choose any two pins that can be used with RX & TX
#define SFX_RX 17                                 // (UART 2) on ESP 32
#define SFX_RST 21                            // Connect to the RST pin on the Sound Board

Adafruit_Soundboard sfx = Adafruit_Soundboard(&Serial2, NULL, SFX_RST);   // pass the software serial to Adafruit_soundboard, the second argument is the debug port (not used really) and the third arg is the reset pin
                                                                          // can also try hardware serial with
                                                                          // Adafruit_Soundboard sfx = Adafruit_Soundboard(&Serial1, NULL, SFX_RST);                                                                        

void setup() {
  Serial.begin(115200);                       // Start Serial Monitor
  ESPNOWSetup();                              // Setup ESP Now Protocol for Wireless communication with controller
  soundFXSetup();                             // Set Up the Adafruit Sound FX board with Serial Communication
  BottangoCore::bottangoSetup();              // Get ready for awesomeness!!
}

void loop(){
  currentTime = millis();                     // Update timer clock to current time
  ESPNOWHandle();                             // Handle incoming signals from Controller
  animationsHandle();                         // Handle Selecting the Animations
  BottangoCore::bottangoLoop();               // Bottango - Work your Magic!!! 
}