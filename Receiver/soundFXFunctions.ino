/************************************************************************************************************

    ENTER the following Code into the Main .ino file

    ** Globals ** 
  #include "Adafruit_Soundboard.h"              // For using the Adafruit Sound FX board in UART
  
  // Adafruit Sound FX Related
  #define SFX_TX 16                             // Choose any two pins that can be used with RX & TX
  #define SFX_RX 17                                 // (UART 2) on ESP 32
  #define SFX_RST 21                            // Connect to the RST pin on the Sound Board

  Adafruit_Soundboard sfx = Adafruit_Soundboard(&Serial2, NULL, SFX_RST);   // pass the software serial to Adafruit_soundboard, the second argument is the debug port (not used really) and the third arg is the reset pin
                                                                            // can also try hardware serial with
                                                                            // Adafruit_Soundboard sfx = Adafruit_Soundboard(&Serial1, NULL, SFX_RST);                                                              

    ** Setup **
  soundFXSetup();                             // Set Up the Adafruit Sound FX board with Serial Communication

    ** Loop **
  
***************************************************************************************************************/
/***********************************************************************************************************
    Enter the following code into BottangoArduinoCallbacks.cpp ===> At the top between "#include "src/Outgoing.h"" and "namespace Callbacks"

      #include "Adafruit_Soundboard.h"              // For using the Adafruit Sound FX board in UART

      extern Adafruit_Soundboard sfx;

***********************************************************************************************************/
/***********************************************************************************************************     

    Enter the following code into BottangoArduinoCallbacks.cpp ===> Under Custom Triggered Events Section **[void onTriggerCustomEventTriggered(AbstractEffector *effector)]**

      char effectorIdentifier[9];
        effector->getIdentifier(effectorIdentifier, 9);

      if (strcmp(effectorIdentifier, "Audio1") == 0) {
        sfx.playTrack(1);
      }
      if (strcmp(effectorIdentifier, "Audio2") == 0) {
        sfx.playTrack(2);
      }
      if (strcmp(effectorIdentifier, "Audio3") == 0) {
        sfx.playTrack(3);
      }
      if (strcmp(effectorIdentifier, "Audio4") == 0) {
        sfx.playTrack(4);
      }
      if (strcmp(effectorIdentifier, "Audio5") == 0) {
        sfx.playTrack(5);
      }
      if (strcmp(effectorIdentifier, "Audio6") == 0) {
        sfx.playTrack(6);
      }
      if (strcmp(effectorIdentifier, "Audio7") == 0) {
        sfx.playTrack(7);
      }
      if (strcmp(effectorIdentifier, "Audio8") == 0) {
        sfx.playTrack(8);
      }
      if (strcmp(effectorIdentifier, "Audio9") == 0) {
        sfx.playTrack(9);
      }
      if (strcmp(effectorIdentifier, "Audio10") == 0) {
        sfx.playTrack(10);
      }
      if (strcmp(effectorIdentifier, "Audio11") == 0) {
        sfx.playTrack(11);
      }

***************************************************************************************************************************/

void soundFXSetup() {
  Serial2.begin(9600);                             // Start Serial 2 (UART 2 on ESP32) at 9600 baud 
  
  if (!sfx.reset()) {
    Serial.println("Not found");
    while (1);
  }
  Serial.println("SFX board found");
  //sfx.reset();
}

/***************************************** Board Commands ***********************************

    Board Reset
      sfx.reset();

    List Files
      uint8_t files = sfx.listFiles();
      Serial.println("File Listing");
      Serial.println("========================");
      Serial.println();
      Serial.print("Found "); Serial.print(files); Serial.println(" Files");
      for (uint8_t f=0; f<files; f++) {
        Serial.print(f); 
        Serial.print("\tname: "); Serial.print(sfx.fileName(f));
        Serial.print("\tsize: "); Serial.println(sfx.fileSize(f));
      }
      Serial.println("========================");
    
    "Enter track #"
      sfx.playTrack((uint8_t)n);

    "Enter track name (full 12 character name!) >"
      char name[20];
      sfx.playTrack(name);

    "Vol up..."
      sfx.volUp();

    "Vol down..."
      sfx.volDown();
   
    "Pausing..."
      sfx.pause();
   
    "Unpausing..."
      sfx.unpause();

    "Stopping..."
      sfx.stop();

    "Track time: "
      uint32_t current, total;
      sfx.trackTime(&current, &total);
      i.e. Serial.print(current); Serial.println(" seconds");

    "Track size (bytes remaining/total):
      sfx.trackSize(&remain, &total);
      i.e. Serial.print(remain); Serial.print("/"); Serial.println(total); 
***********************************************************************************************************/