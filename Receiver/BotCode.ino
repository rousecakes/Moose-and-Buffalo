/*****************************************************************************************

  Change "#define MAX_REGISTERED_EFFECTORS" to 22 on BottangoArduinoConfig.h File


  ENTER the following Code into the Main .ino file

    ** Globals **
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

  ** Setup **

  ** Loop **
  animationsHandle();                         // Handle Selecting the Animations

*********************************************************************************************/
void animationsHandle() {
  if (animationFlag_10 == 1) {                            // If quit button is pressed...
    BottangoCore::commandStreamProvider.stop();               // Stop the Animation
    sfx.stop();                                               // Stop the Audio
    lastTime = currentTime;                                   // Set Timer to Delay in order to allow time for air cylinders to return to Home Position
    animationFlag_1 = 0;                                      // Reset Animation Flags
    animationFlag_2 = 0;
    animationFlag_3 = 0;
    animationFlag_4 = 0;
    animationFlag_5 = 0;
    animationFlag_6 = 0;
    animationFlag_7 = 0;
    animationFlag_8 = 0;
    animationFlag_9 = 0;
    animationFlag_10 = 0;
  }
  if (audioFlag_1 == 1) {                                 // If Volume Down Button is Pressed...
    sfx.volDown();                                            // Turn Down Volume on Adafruit Sound Fx Board
    audioFlag_1 = 0;                                          // Reset Audio Flag
  }
  if (audioFlag_2 == 1) {                                 // If Volume Up Button is Pressed...
    sfx.volUp();                                              // Turn Up Volume on Adafruit Sound Fx Board
    audioFlag_2 = 0;                                          // Reset Audio Flag
  }
  if (!BottangoCore::commandStreamProvider.streamIsInProgress() && ((currentTime - lastTime) > delayInterval)) {      // If NO Stream in progress and Stop Timer Delay has ended...
    if (animationFlag_1 == 1) {                                         // If Moose Button 1 Selected
      BottangoCore::commandStreamProvider.startCommandStream(0, 0);         // Start Playing Animation Moose 1 (Bugaboo Nelle) No Loop
      animationFlag_1 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 1 - Moose 1");
    }
    if (animationFlag_2 == 1) {                                         // If Moose Button 2 Selected
      BottangoCore::commandStreamProvider.startCommandStream(1, 0);         // Start Playing Animation Moose 2 () No Loop
      animationFlag_2 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 2 - Moose 2");
    }
    if (animationFlag_3 == 1) {                                         // If Moose Button 3 Selected
      BottangoCore::commandStreamProvider.startCommandStream(2, 0);         // Start Playing Animation Moose 3 () No Loop
      animationFlag_3 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 3 - Moose 3");
    } 
    if (animationFlag_4 == 1) {                                         // If Bison Button 1 Selected
      BottangoCore::commandStreamProvider.startCommandStream(3, 0);         // Start Playing Animation Bison 1 (BC Shower) No Loop
      animationFlag_4 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 4 - Bison 1");
    }
    if (animationFlag_5 == 1) {                                         // If Bison Button 2 Selected
      BottangoCore::commandStreamProvider.startCommandStream(4, 0);         // Start Playing Animation Bison 2 () No Loop
      animationFlag_5 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 5 - Bison 2");
    }
    if (animationFlag_6 == 1) {                                         // If Bison Button 3 Selected
      BottangoCore::commandStreamProvider.startCommandStream(5, 0);         // Start Playing Animation Bison 3 () No Loop
      animationFlag_6 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 6 - Bison 3");
    } 
    if (animationFlag_7 == 1) {                                         // If Moose & Bison Button 1 Selected
      BottangoCore::commandStreamProvider.startCommandStream(6, 0);         // Start Playing Animation Moose & Bison 1 (Knife Man Bill) No Loop
      animationFlag_7 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 7 - M&B 1");
    }
    if (animationFlag_8 == 1) {                                         // If Moose & Bison Button 2 Selected
      BottangoCore::commandStreamProvider.startCommandStream(7, 0);         // Start Playing Animation Moose & Bison 2 () No Loop
      animationFlag_8 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 8 - M&B 2");
    } 
    if (animationFlag_9 == 1) {                                         // If Moose & Bison Button 3 Selected
      BottangoCore::commandStreamProvider.startCommandStream(8, 0);         // Start Playing Animation Moose & Bison 3 () No Loop
      animationFlag_9 = 0;                                                  // Reset Animation Flag
      Serial.println("Animation 9 - M&B 3");
    }          
  }
}