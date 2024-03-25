#include "GeneratedCommandStreams.h"

namespace GeneratedCommandStreams
{

    //// !!! Insert/edit your animation triggering and playback logic here !!! ////
    /* Some helpful methods:

        BottangoCore::commandStreamProvider.streamIsInProgress()                                        //returns if any animation is currently playing
        BottangoCore::commandStreamProvider.startCommandStream(byte animationID, bool looping)          //starts playing an animation (and stops the current if any)
        BottangoCore::commandStreamProvider.stop()                                                      //stops the current playing animation, if any
    */

    /* Animations key:
        0 - Moose_1_Bugaboo_Nelle
        1 - Moose_2
        2 - Moose_3
        3 - Bison_1_BC_Shower
        4 - Bison_2
        5 - Bison_3
        6 - Moose&Bison_1_Knife_Man_Bill
        7 - Moose&Bison_2
        8 - Moose&Bison_3
    */

    bool playBegan = false;
    bool playOnStart = false;
    bool loop = false;
    byte startingAnimation = 0;

    // called once per update loop, your logic probably goes here.
    void updatePlayStatus()
    {
        // if haven't started any animations, or if should loop and nothing is playing (IE the last loop ended)
        if (playOnStart && (!playBegan || (loop && !BottangoCore::commandStreamProvider.streamIsInProgress())))
        {
            BottangoCore::commandStreamProvider.startCommandStream(startingAnimation, loop);
            playBegan = true;
        }
    }

    //// ----------------------------------------- /////

    //// GENERATED CODE. You probably don't need to change any of the below ////
    const char SETUP_CHAR_STREAM[] PROGMEM = "rECTrig,Audio1,255\nrECOnOff,mouthM,0,33\nrECOnOff,headUDM,0,23\nrECOnOff,headSSM,0,18\nrECOnOff,earsM,0,32\nrECOnOff,eyesM,0,27\nrECOnOff,MLIGHT,1,2\nrECTrig,Audio4,255\nrECOnOff,mouthB,0,14\nrECOnOff,headSSB,0,26\nrECOnOff,headUDB,0,25\nrECOnOff,earsB,0,13\nrECOnOff,eyesB,0,19\nrECOnOff,BLIGHT,1,4\nrECTrig,Audio7,255\n";
    const char STREAM_MOOSE_1_BUGABOO_NELLE_CHAR_STREAM[] PROGMEM = "sCO,mouthM,0,0\nsCO,MLIGHT,0,1\nsCO,eyesM,0,0\nsCO,earsM,0,0\nsCO,headSSM,0,0\nsCO,headUDM,0,0\nsCT,Audio1,0\nsCO,earsM,567,1\nsCO,earsM,800,0\nsCO,headSSM,833,1\nsCO,headUDM,967,1\nsCO,mouthM,1233,1\nsCO,headUDM,1433,0\nsCO,mouthM,1467,0\nsCO,headUDM,1500,1\nsCO,mouthM,1667,1\nsCO,headUDM,1700,0\nsCO,headUDM,1767,1\nsCO,mouthM,1833,0\nsCO,mouthM,1933,1\nsCO,mouthM,2033,0\nsCO,earsM,2333,1\nsCO,mouthM,2367,1\nsCO,eyesM,2400,1\nsCO,mouthM,2633,0\nsCO,mouthM,2700,1\nsCO,earsM,2733,0\nsCO,mouthM,3033,0\nsCO,eyesM,3167,0\nsCO,headUDM,3233,0\nsCO,mouthM,3267,1\nsCO,mouthM,3400,0\nsCO,mouthM,3500,1\nsCO,mouthM,3600,0\nsCO,earsM,3767,1\nsCO,headUDM,3867,1\nsCO,mouthM,3900,1\nsCO,earsM,3933,0\nsCO,mouthM,4033,0\nsCO,mouthM,4067,1\nsCO,headSSM,4067,0\nsCO,mouthM,4200,0\nsCO,earsM,4333,1\nsCO,mouthM,4567,1\nsCO,mouthM,4700,0\nsCO,mouthM,4900,1\nsCO,earsM,4967,0\nsCO,mouthM,5033,0\nsCO,mouthM,5100,1\nsCO,mouthM,5167,0\nsCO,mouthM,5333,1\nsCO,mouthM,5467,0\nsCO,mouthM,5567,1\nsCO,mouthM,5667,0\nsCO,headSSM,5700,1\nsCO,mouthM,5767,1\nsCO,mouthM,5867,0\nsCO,mouthM,5933,1\nsCO,mouthM,6033,0\nsCO,headSSM,6333,0\nsCO,headUDM,6400,0\nsCO,mouthM,7100,1\nsCO,eyesM,7167,1\nsCO,earsM,7200,1\nsCO,mouthM,7267,0\nsCO,headSSM,7467,1\nsCO,mouthM,7467,1\nsCO,mouthM,7633,0\nsCO,earsM,7633,0\nsCO,eyesM,7733,0\nsCO,mouthM,8033,1\nsCO,mouthM,8200,0\nsCO,mouthM,8367,1\nsCO,headUDM,8367,1\nsCO,headUDM,8467,0\nsCO,headSSM,8533,0\nsCO,mouthM,8533,0\nsCO,mouthM,8767,1\nsCO,mouthM,9100,0\nsCO,headSSM,9700,1\nsCO,headSSM,10233,0\nsCO,mouthM,10400,1\nsCO,headUDM,10500,1\nsCO,mouthM,10567,0\nsCO,earsM,10567,1\nsCO,mouthM,10633,1\nsCO,mouthM,10767,0\nsCO,mouthM,10933,1\nsCO,mouthM,11100,0\nsCO,mouthM,11200,1\nsCO,mouthM,11267,0\nsCO,eyesM,11500,1\nsCO,earsM,11533,0\nsCO,mouthM,11567,1\nsCO,mouthM,11700,0\nsCO,eyesM,11733,0\nsCO,mouthM,11767,1\nsCO,headSSM,11900,1\nsCO,mouthM,11900,0\nsCO,mouthM,12033,1\nsCO,mouthM,12167,0\nsCO,mouthM,12400,1\nsCO,mouthM,12500,0\nsCO,mouthM,12633,1\nsCO,headUDM,12633,0\nsCO,mouthM,12733,0\nsCO,mouthM,13033,1\nsCO,mouthM,13133,0\nsCO,mouthM,13200,1\nsCO,mouthM,13300,0\nsCO,mouthM,13367,1\nsCO,mouthM,13467,0\nsCO,mouthM,13700,1\nsCO,mouthM,13800,0\nsCO,headUDM,13933,1\nsCO,earsM,14000,1\nsCO,earsM,14167,0\nsCO,eyesM,14267,1\nsCO,mouthM,14300,1\nsCO,headSSM,14367,0\nsCO,mouthM,14433,0\nsCO,earsM,14500,1\nsCO,mouthM,14700,1\nsCO,eyesM,14800,0\nsCO,earsM,14833,0\nsCO,mouthM,14833,0\nsCO,mouthM,15000,1\nsCO,mouthM,15100,0\nsCO,mouthM,15200,1\nsCO,mouthM,15333,0\nsCO,mouthM,15600,1\nsCO,mouthM,15733,0\nsCO,mouthM,15867,1\nsCO,mouthM,16000,0\nsCO,earsM,16067,1\nsCO,mouthM,16100,1\nsCO,mouthM,16233,0\nsCO,headUDM,16267,0\nsCO,headSSM,16733,1\nsCO,earsM,16767,0\nsCO,mouthM,17367,1\nsCO,headSSM,17467,0\nsCO,mouthM,17500,0\nsCO,mouthM,17633,1\nsCO,mouthM,17800,0\nsCO,mouthM,17967,1\nsCO,mouthM,18100,0\nsCO,eyesM,18100,1\nsCO,mouthM,18233,1\nsCO,mouthM,18333,0\nsCO,headSSM,18367,1\nsCO,mouthM,18467,1\nsCO,mouthM,18567,0\nsCO,eyesM,18600,0\nsCO,earsM,18633,1\nsCO,mouthM,18667,1\nsCO,mouthM,18767,0\nsCO,mouthM,18967,1\nsCO,mouthM,19033,0\nsCO,earsM,19133,0\nsCO,mouthM,19133,1\nsCO,mouthM,19200,0\nsCO,mouthM,19567,1\nsCO,headUDM,19600,1\nsCO,mouthM,19733,0\nsCO,mouthM,19833,1\nsCO,mouthM,19933,0\nsCO,headUDM,20067,0\nsCO,mouthM,20100,1\nsCO,headUDM,20100,1\nsCO,mouthM,20267,0\nsCO,earsM,20467,1\nsCO,headUDM,20467,0\nsCO,mouthM,20567,1\nsCO,mouthM,20667,0\nsCO,mouthM,20800,1\nsCO,mouthM,20900,0\nsCO,earsM,20933,0\nsCO,headSSM,21233,0\nsCO,mouthM,21533,1\nsCO,mouthM,21700,0\nsCO,mouthM,21800,1\nsCO,eyesM,21900,1\nsCO,mouthM,21900,0\nsCO,mouthM,22133,1\nsCO,eyesM,22200,0\nsCO,mouthM,22267,0\nsCO,mouthM,22467,1\nsCO,mouthM,22567,0\nsCO,mouthM,22767,1\nsCO,headUDM,22867,1\nsCO,earsM,22900,1\nsCO,mouthM,22933,0\nsCO,mouthM,23067,1\nsCO,mouthM,23200,0\nsCO,earsM,23267,0\nsCO,earsM,23367,1\nsCO,mouthM,23400,1\nsCO,earsM,23500,0\nsCO,earsM,23567,1\nsCO,mouthM,23600,0\nsCO,earsM,23700,0\nsCO,headSSM,23933,1\nsCO,headUDM,24067,0\nsCO,mouthM,24300,1\nsCO,mouthM,24433,0\nsCO,mouthM,24567,1\nsCO,mouthM,24700,0\nsCO,headUDM,24733,1\nsCO,mouthM,24867,1\nsCO,mouthM,25033,0\nsCO,headSSM,25167,0\nsCO,mouthM,25433,1\nsCO,earsM,25467,1\nsCO,mouthM,25600,0\nsCO,mouthM,25700,1\nsCO,mouthM,25833,0\nsCO,mouthM,25967,1\nsCO,earsM,26033,0\nsCO,mouthM,26100,0\nsCO,headSSM,26167,1\nsCO,mouthM,26233,1\nsCO,eyesM,26500,1\nsCO,mouthM,26567,0\nsCO,headUDM,26633,0\nsCO,headSSM,26733,0\nsCO,eyesM,26767,0\nsCO,headUDM,27033,1\nsCO,mouthM,27067,1\nsCO,earsM,27100,1\nsCO,mouthM,27300,0\nsCO,mouthM,27433,1\nsCO,mouthM,27533,0\nsCO,mouthM,27667,1\nsCO,mouthM,27767,0\nsCO,earsM,27800,0\nsCO,headSSM,27800,1\nsCO,mouthM,28000,1\nsCO,headUDM,28133,0\nsCO,mouthM,28233,0\nsCO,headSSM,28667,0\nsCO,mouthM,28867,1\nsCO,mouthM,29000,0\nsCO,mouthM,29100,1\nsCO,earsM,29167,1\nsCO,mouthM,29200,0\nsCO,mouthM,29333,1\nsCO,earsM,29333,0\nsCO,headUDM,29333,1\nsCO,mouthM,29467,0\nsCO,eyesM,29533,1\nsCO,mouthM,29633,1\nsCO,mouthM,29767,0\nsCO,headSSM,29833,1\nsCO,mouthM,29900,1\nsCO,eyesM,30033,0\nsCO,mouthM,30067,0\nsCO,mouthM,30200,1\nsCO,mouthM,30333,0\nsCO,mouthM,30567,1\nsCO,mouthM,30667,0\nsCO,mouthM,30833,1\nsCO,headUDM,30867,0\nsCO,mouthM,30933,0\nsCO,earsM,30933,1\nsCO,headSSM,30933,0\nsCO,mouthM,31000,1\nsCO,mouthM,31333,0\nsCO,earsM,31533,0\nsCO,headSSM,32600,1\nsCO,headUDM,32633,1\nsCO,earsM,32667,1\nsCO,mouthM,32733,1\nsCO,mouthM,32867,0\nsCO,mouthM,33000,1\nsCO,mouthM,33133,0\nsCO,earsM,33167,0\nsCO,mouthM,33267,1\nsCO,mouthM,33400,0\nsCO,mouthM,33567,1\nsCO,mouthM,33733,0\nsCO,headSSM,34067,0\nsCO,mouthM,34100,1\nsCO,headUDM,34233,0\nsCO,eyesM,34267,1\nsCO,mouthM,34333,0\nsCO,headUDM,34500,1\nsCO,mouthM,34533,1\nsCO,eyesM,34600,0\nsCO,mouthM,34633,0\nsCO,earsM,34633,1\nsCO,earsM,34867,0\nsCO,mouthM,34867,1\nsCO,mouthM,35000,0\nsCO,mouthM,35133,1\nsCO,headSSM,35200,1\nsCO,mouthM,35267,0\nsCO,mouthM,35500,1\nsCO,earsM,35600,1\nsCO,eyesM,35733,1\nsCO,mouthM,36433,0\nsCO,headSSM,36533,0\nsCO,eyesM,36633,0\nsCO,earsM,36667,0\nsCO,headUDM,36700,0\nsCO,mouthM,36800,1\nsCO,mouthM,36933,0\nsCO,earsM,37000,1\nsCO,mouthM,37033,1\nsCO,earsM,37100,0\nsCO,mouthM,37133,0\nsCO,mouthM,37300,1\nsCO,earsM,37300,1\nsCO,earsM,37367,0\nsCO,mouthM,37400,0\nsCO,mouthM,37567,1\nsCO,mouthM,37667,0\nsCO,mouthM,37833,1\nsCO,mouthM,37933,0\nsCO,earsM,38067,1\nsCO,mouthM,38067,1\nsCO,mouthM,38200,0\nsCO,earsM,38233,0\nsCO,headSSM,38267,1\nsCO,headUDM,38300,1\nsCO,earsM,38367,1\nsCO,mouthM,38433,1\nsCO,earsM,38500,0\nsCO,mouthM,38567,0\nsCO,eyesM,38600,1\nsCO,earsM,38633,1\nsCO,headUDM,38733,0\nsCO,eyesM,38767,0\nsCO,headSSM,38867,0\nsCO,headSSM,38900,1\nsCO,earsM,39033,0\nsCO,headSSM,39133,0\nsCO,headSSM,39867,1\nsCO,headUDM,40100,1\nsCO,mouthM,40100,1\nsCO,mouthM,40233,0\nsCO,mouthM,40400,1\nsCO,mouthM,40567,0\nsCO,mouthM,40667,1\nsCO,earsM,40767,1\nsCO,mouthM,40800,0\nsCO,mouthM,40933,1\nsCO,earsM,40967,0\nsCO,mouthM,41067,0\nsCO,mouthM,41233,1\nsCO,earsM,41300,1\nsCO,eyesM,41367,1\nsCO,mouthM,41400,0\nsCO,earsM,41467,0\nsCO,headSSM,41533,0\nsCO,mouthM,41600,1\nsCO,headSSM,41600,1\nsCO,eyesM,41667,0\nsCO,headSSM,41700,0\nsCO,mouthM,41733,0\nsCO,mouthM,42000,1\nsCO,headUDM,42133,0\nsCO,mouthM,42167,0\nsCO,earsM,42267,1\nsCO,mouthM,42467,1\nsCO,earsM,43233,0\nsCO,mouthM,43333,0\nsCO,mouthM,43367,0\nsCO,mouthM,43400,0\nsCO,mouthM,43767,1\nsCO,earsM,44167,1\nsCO,earsM,44300,0\nsCO,earsM,44333,1\nsCO,earsM,44467,0\nsCO,mouthM,44567,0\nsCO,mouthM,44600,1\nsCO,earsM,44733,1\nsCO,mouthM,45000,0\nsCO,mouthM,45067,1\nsCO,earsM,45133,0\nsCO,mouthM,45267,0\nsCO,eyesM,45933,0\nsCO,MLIGHT,45933,0\n";
    const char STREAM_MOOSE_1_BUGABOO_NELLE_CHAR_STREAM_LOOP[] PROGMEM = "sCO,MLIGHT,0,1\n";
    const char STREAM_MOOSE_2_CHAR_STREAM[] PROGMEM = "";
    const char STREAM_MOOSE_2_CHAR_STREAM_LOOP[] PROGMEM = "";
    const char STREAM_MOOSE_3_CHAR_STREAM[] PROGMEM = "";
    const char STREAM_MOOSE_3_CHAR_STREAM_LOOP[] PROGMEM = "";
    const char STREAM_BISON_1_BC_SHOWER_CHAR_STREAM[] PROGMEM = "sCT,Audio4,0\nsCO,headSSB,0,0\nsCO,earsB,0,0\nsCO,eyesB,0,0\nsCO,BLIGHT,0,1\nsCO,headUDB,0,0\nsCO,mouthB,0,0\nsCO,mouthB,500,1\nsCO,mouthB,700,0\nsCO,mouthB,900,1\nsCO,mouthB,1067,0\nsCO,headSSB,1133,1\nsCO,mouthB,1133,1\nsCO,headSSB,1233,0\nsCO,mouthB,1333,0\nsCO,headSSB,1533,1\nsCO,mouthB,1667,1\nsCO,mouthB,1933,0\nsCO,earsB,2067,1\nsCO,headUDB,2067,1\nsCO,mouthB,2133,1\nsCO,mouthB,2233,0\nsCO,earsB,2333,0\nsCO,mouthB,2500,1\nsCO,mouthB,2633,0\nsCO,headUDB,2667,0\nsCO,mouthB,2733,1\nsCO,mouthB,2800,0\nsCO,mouthB,2933,1\nsCO,eyesB,2967,1\nsCO,mouthB,3133,0\nsCO,mouthB,3200,1\nsCO,headUDB,3267,1\nsCO,eyesB,3367,0\nsCO,mouthB,3500,0\nsCO,mouthB,3600,1\nsCO,mouthB,3967,0\nsCO,headUDB,4433,0\nsCO,headSSB,4500,0\nsCO,mouthB,4767,1\nsCO,mouthB,4867,0\nsCO,mouthB,5300,1\nsCO,mouthB,5400,0\nsCO,mouthB,5500,1\nsCO,headSSB,5600,1\nsCO,mouthB,5833,0\nsCO,headSSB,6533,0\nsCO,mouthB,6567,1\nsCO,mouthB,6667,0\nsCO,earsB,6667,1\nsCO,mouthB,6933,1\nsCO,earsB,7000,0\nsCO,mouthB,7033,0\nsCO,mouthB,7133,1\nsCO,mouthB,7233,0\nsCO,mouthB,7333,1\nsCO,mouthB,7433,0\nsCO,mouthB,7567,1\nsCO,mouthB,7700,0\nsCO,headUDB,7767,1\nsCO,mouthB,7800,1\nsCO,headSSB,7867,1\nsCO,mouthB,7867,0\nsCO,earsB,7900,1\nsCO,eyesB,7933,1\nsCO,earsB,8000,0\nsCO,headUDB,8433,0\nsCO,eyesB,8567,0\nsCO,mouthB,8933,1\nsCO,headUDB,9000,1\nsCO,mouthB,9067,0\nsCO,mouthB,9167,1\nsCO,mouthB,9300,0\nsCO,mouthB,9367,1\nsCO,mouthB,9433,0\nsCO,mouthB,9600,1\nsCO,mouthB,9733,0\nsCO,mouthB,9900,1\nsCO,mouthB,9933,0\nsCO,headSSB,10067,0\nsCO,mouthB,10067,1\nsCO,mouthB,10167,0\nsCO,mouthB,10433,1\nsCO,mouthB,10533,0\nsCO,headUDB,11200,0\nsCO,mouthB,11233,1\nsCO,mouthB,11333,0\nsCO,mouthB,11400,1\nsCO,earsB,11500,1\nsCO,mouthB,11500,0\nsCO,mouthB,11600,1\nsCO,mouthB,11700,0\nsCO,earsB,11767,0\nsCO,mouthB,11867,1\nsCO,mouthB,11967,0\nsCO,mouthB,12100,1\nsCO,mouthB,12167,0\nsCO,headSSB,12433,1\nsCO,mouthB,12500,1\nsCO,mouthB,12600,0\nsCO,mouthB,12733,1\nsCO,mouthB,12833,0\nsCO,mouthB,12933,1\nsCO,mouthB,13100,0\nsCO,mouthB,13233,1\nsCO,mouthB,13400,0\nsCO,mouthB,13533,1\nsCO,eyesB,13600,1\nsCO,mouthB,13633,0\nsCO,mouthB,13733,1\nsCO,headSSB,13733,0\nsCO,mouthB,13833,0\nsCO,mouthB,14067,1\nsCO,eyesB,14100,0\nsCO,mouthB,14300,0\nsCO,mouthB,14500,1\nsCO,earsB,14533,1\nsCO,mouthB,14633,0\nsCO,earsB,14633,0\nsCO,headUDB,14833,1\nsCO,mouthB,14867,1\nsCO,earsB,14900,1\nsCO,mouthB,14967,0\nsCO,earsB,15033,0\nsCO,mouthB,15067,1\nsCO,mouthB,15167,0\nsCO,mouthB,15333,1\nsCO,mouthB,15467,0\nsCO,headUDB,15567,0\nsCO,headSSB,16067,1\nsCO,mouthB,16267,1\nsCO,mouthB,16367,0\nsCO,mouthB,16500,1\nsCO,mouthB,16567,0\nsCO,mouthB,16700,1\nsCO,mouthB,16800,0\nsCO,headSSB,16967,0\nsCO,mouthB,17133,1\nsCO,mouthB,17267,0\nsCO,mouthB,17433,1\nsCO,mouthB,17500,0\nsCO,mouthB,17633,1\nsCO,mouthB,17733,0\nsCO,mouthB,17933,1\nsCO,earsB,18033,1\nsCO,mouthB,18067,0\nsCO,earsB,18233,0\nsCO,mouthB,18300,1\nsCO,mouthB,18433,0\nsCO,eyesB,18467,1\nsCO,mouthB,18800,1\nsCO,headUDB,18867,1\nsCO,mouthB,18900,0\nsCO,eyesB,18900,0\nsCO,headSSB,18933,1\nsCO,mouthB,19233,1\nsCO,mouthB,19367,0\nsCO,mouthB,19433,1\nsCO,headUDB,19500,0\nsCO,mouthB,19567,0\nsCO,mouthB,19633,1\nsCO,mouthB,19767,0\nsCO,headSSB,20133,0\nsCO,headUDB,20533,1\nsCO,mouthB,20567,1\nsCO,mouthB,20667,0\nsCO,mouthB,20733,1\nsCO,mouthB,20833,0\nsCO,headSSB,20933,1\nsCO,headUDB,21233,0\nsCO,mouthB,21367,1\nsCO,mouthB,21500,0\nsCO,mouthB,21600,1\nsCO,headUDB,21667,1\nsCO,mouthB,21733,0\nsCO,earsB,21767,1\nsCO,headSSB,22000,0\nsCO,mouthB,22067,1\nsCO,mouthB,22167,0\nsCO,earsB,22267,0\nsCO,mouthB,22367,1\nsCO,eyesB,22467,1\nsCO,mouthB,22467,0\nsCO,mouthB,22767,1\nsCO,mouthB,22867,0\nsCO,eyesB,23000,0\nsCO,mouthB,23167,1\nsCO,headSSB,23267,1\nsCO,mouthB,23267,0\nsCO,mouthB,23333,1\nsCO,headUDB,23333,0\nsCO,mouthB,23467,0\nsCO,mouthB,23867,1\nsCO,mouthB,24033,0\nsCO,mouthB,24100,1\nsCO,mouthB,24233,0\nsCO,headUDB,24467,1\nsCO,mouthB,24533,1\nsCO,mouthB,24667,0\nsCO,headUDB,24867,0\nsCO,mouthB,24933,1\nsCO,mouthB,25100,0\nsCO,earsB,25267,1\nsCO,earsB,25433,0\nsCO,headSSB,25567,0\nsCO,eyesB,26767,1\nsCO,eyesB,26967,0\nsCO,headUDB,27867,0\nsCO,mouthB,28000,0\nsCO,earsB,28467,0\nsCO,eyesB,28900,0\nsCO,earsB,29733,0\nsCO,BLIGHT,29833,0\n";
    const char STREAM_BISON_1_BC_SHOWER_CHAR_STREAM_LOOP[] PROGMEM = "sCO,BLIGHT,0,1\n";
    const char STREAM_BISON_2_CHAR_STREAM[] PROGMEM = "";
    const char STREAM_BISON_2_CHAR_STREAM_LOOP[] PROGMEM = "";
    const char STREAM_BISON_3_CHAR_STREAM[] PROGMEM = "";
    const char STREAM_BISON_3_CHAR_STREAM_LOOP[] PROGMEM = "";
    const char STREAM_MOOSEBISON_1_KNIFE_MAN_BILL_CHAR_STREAM[] PROGMEM = "sCT,Audio7,0\nsCO,headSSB,0,0\nsCO,mouthM,0,0\nsCO,eyesM,0,0\nsCO,earsB,0,0\nsCO,earsM,0,0\nsCO,headSSM,0,0\nsCO,eyesB,0,0\nsCO,headUDB,0,0\nsCO,mouthB,0,0\nsCO,headUDM,0,0\nsCO,BLIGHT,67,1\nsCO,MLIGHT,67,1\nsCO,headSSB,600,1\nsCO,mouthB,900,1\nsCO,mouthB,1067,0\nsCO,headUDB,1100,1\nsCO,mouthB,1167,1\nsCO,mouthB,1267,0\nsCO,mouthB,1333,1\nsCO,mouthB,1400,0\nsCO,headUDB,1400,0\nsCO,headUDM,1800,1\nsCO,headUDB,1800,1\nsCO,earsB,2000,1\nsCO,eyesB,2300,1\nsCO,earsM,2333,1\nsCO,eyesM,2367,1\nsCO,earsB,2367,0\nsCO,mouthB,2400,1\nsCO,headSSM,2433,1\nsCO,headSSB,2433,0\nsCO,mouthB,2533,0\nsCO,earsM,2600,0\nsCO,headUDB,2600,0\nsCO,mouthB,2667,1\nsCO,eyesM,2733,0\nsCO,headUDB,2733,1\nsCO,mouthB,2767,0\nsCO,eyesB,2833,0\nsCO,mouthB,2833,1\nsCO,headUDB,2900,0\nsCO,mouthB,2933,0\nsCO,mouthB,3067,1\nsCO,mouthB,3167,0\nsCO,mouthB,3233,1\nsCO,mouthB,3367,0\nsCO,earsB,3467,1\nsCO,mouthB,3467,1\nsCO,mouthB,3600,0\nsCO,earsB,3600,0\nsCO,mouthB,3667,1\nsCO,earsB,3667,1\nsCO,headSSB,3700,1\nsCO,mouthB,3733,0\nsCO,headUDB,3767,1\nsCO,earsB,3833,0\nsCO,mouthB,3867,1\nsCO,mouthB,3967,0\nsCO,mouthB,4033,1\nsCO,mouthB,4100,0\nsCO,headUDB,4133,0\nsCO,earsM,4167,1\nsCO,headSSM,4300,0\nsCO,headSSM,4333,1\nsCO,headSSB,4333,0\nsCO,headSSM,4367,0\nsCO,headUDM,4667,0\nsCO,mouthM,5000,1\nsCO,headUDM,5067,1\nsCO,headSSM,5100,1\nsCO,earsM,5100,0\nsCO,mouthM,5433,0\nsCO,mouthM,5533,1\nsCO,mouthM,5667,0\nsCO,mouthM,5733,1\nsCO,mouthM,5800,0\nsCO,headSSB,5833,1\nsCO,earsM,6000,1\nsCO,headUDM,6200,0\nsCO,earsM,6200,0\nsCO,headSSM,6367,0\nsCO,eyesM,6467,1\nsCO,mouthB,6467,1\nsCO,headUDB,6533,1\nsCO,mouthB,6633,0\nsCO,headUDM,6667,1\nsCO,headSSB,6767,0\nsCO,eyesB,6800,1\nsCO,mouthB,6833,1\nsCO,eyesM,6867,0\nsCO,mouthB,6900,0\nsCO,mouthB,6967,1\nsCO,headUDB,7000,0\nsCO,mouthB,7033,0\nsCO,eyesB,7033,0\nsCO,headUDB,7067,1\nsCO,mouthB,7133,1\nsCO,headUDB,7200,0\nsCO,headUDB,7267,1\nsCO,mouthB,7267,0\nsCO,headSSB,7300,1\nsCO,mouthB,7333,1\nsCO,mouthB,7433,0\nsCO,mouthB,7600,1\nsCO,mouthB,7633,0\nsCO,earsB,7767,1\nsCO,headUDM,7833,0\nsCO,headUDB,7933,0\nsCO,mouthB,7933,1\nsCO,earsB,8000,0\nsCO,mouthB,8000,0\nsCO,mouthB,8067,1\nsCO,mouthM,8100,0\nsCO,mouthB,8133,0\nsCO,mouthM,8133,0\nsCO,mouthB,8233,1\nsCO,earsM,8333,1\nsCO,mouthB,8367,0\nsCO,mouthB,8467,1\nsCO,headSSB,8467,0\nsCO,mouthB,8567,0\nsCO,mouthB,8733,1\nsCO,headUDB,8767,1\nsCO,mouthB,8833,0\nsCO,headSSM,8867,1\nsCO,mouthB,8900,1\nsCO,headSSB,8933,1\nsCO,earsM,8967,0\nsCO,mouthB,9000,0\nsCO,headUDM,9000,1\nsCO,mouthB,9067,1\nsCO,headUDB,9133,0\nsCO,mouthB,9200,0\nsCO,headUDB,9267,1\nsCO,headUDB,9533,0\nsCO,headSSB,9533,0\nsCO,headUDB,9667,1\nsCO,headUDB,9767,0\nsCO,headSSM,10200,0\nsCO,mouthM,10267,1\nsCO,mouthM,10467,0\nsCO,mouthM,10533,1\nsCO,eyesB,10567,1\nsCO,headSSM,10600,1\nsCO,eyesM,10600,1\nsCO,mouthM,10700,0\nsCO,earsB,10733,1\nsCO,earsB,10933,0\nsCO,eyesM,10933,0\nsCO,eyesB,10967,0\nsCO,earsM,11067,1\nsCO,headSSM,11167,0\nsCO,mouthM,11233,1\nsCO,mouthM,11400,0\nsCO,mouthM,11433,1\nsCO,headSSB,11467,1\nsCO,mouthM,11567,0\nsCO,mouthM,11733,1\nsCO,mouthM,11933,0\nsCO,earsM,11933,0\nsCO,mouthM,12333,1\nsCO,earsM,12333,1\nsCO,headSSM,12433,1\nsCO,earsM,12467,0\nsCO,headSSB,12533,0\nsCO,headUDB,12567,1\nsCO,mouthM,12600,0\nsCO,mouthM,12700,1\nsCO,headUDB,12833,0\nsCO,mouthM,12867,0\nsCO,mouthM,12933,1\nsCO,earsB,12933,1\nsCO,headUDB,12967,1\nsCO,mouthM,13000,0\nsCO,headSSM,13033,0\nsCO,mouthB,13033,1\nsCO,mouthM,13067,1\nsCO,mouthM,13167,0\nsCO,headUDB,13167,0\nsCO,mouthB,13167,0\nsCO,headSSM,13233,1\nsCO,earsB,13233,0\nsCO,headUDB,13267,1\nsCO,headSSB,13267,1\nsCO,headUDB,13367,0\nsCO,mouthM,13500,1\nsCO,earsB,13533,1\nsCO,earsB,13633,0\nsCO,mouthM,13667,0\nsCO,earsB,13733,1\nsCO,eyesB,13767,1\nsCO,mouthB,13800,1\nsCO,earsB,13800,0\nsCO,mouthB,13867,0\nsCO,mouthB,13933,1\nsCO,headSSM,13933,0\nsCO,headUDB,13933,1\nsCO,eyesB,13967,0\nsCO,mouthB,14033,0\nsCO,mouthB,14100,1\nsCO,mouthB,14233,0\nsCO,mouthB,14333,1\nsCO,mouthB,14400,0\nsCO,headUDM,14567,0\nsCO,headUDB,14600,0\nsCO,mouthB,14600,1\nsCO,headUDM,14600,1\nsCO,headUDM,14633,0\nsCO,headUDB,14667,1\nsCO,mouthB,14667,0\nsCO,headUDB,14800,0\nsCO,headSSB,14833,0\nsCO,mouthB,14833,1\nsCO,mouthB,14900,0\nsCO,mouthB,15000,1\nsCO,mouthB,15133,0\nsCO,mouthB,15200,1\nsCO,headUDB,15200,1\nsCO,eyesM,15233,1\nsCO,mouthB,15300,0\nsCO,mouthB,15467,1\nsCO,headUDB,15500,0\nsCO,mouthB,15533,0\nsCO,headUDB,15600,1\nsCO,mouthB,15633,1\nsCO,eyesM,15667,0\nsCO,headUDB,15733,0\nsCO,mouthB,15733,0\nsCO,headSSM,15767,1\nsCO,mouthB,15800,1\nsCO,mouthB,15900,0\nsCO,mouthB,16067,1\nsCO,headUDB,16100,1\nsCO,mouthB,16167,0\nsCO,headUDB,16200,0\nsCO,mouthB,16233,1\nsCO,mouthB,16367,0\nsCO,mouthM,16500,0\nsCO,earsB,16667,1\nsCO,mouthB,16733,1\nsCO,earsB,16800,0\nsCO,mouthB,16833,0\nsCO,mouthB,16900,1\nsCO,headUDB,17000,1\nsCO,mouthB,17000,0\nsCO,headUDB,17333,0\nsCO,eyesB,17367,1\nsCO,headSSB,17433,1\nsCO,mouthB,17467,1\nsCO,mouthB,17567,0\nsCO,eyesB,17833,0\nsCO,headUDB,18133,1\nsCO,mouthB,18233,1\nsCO,earsM,18267,1\nsCO,mouthB,18300,0\nsCO,mouthB,18367,1\nsCO,mouthB,18467,0\nsCO,headUDM,18533,1\nsCO,mouthB,18533,1\nsCO,headSSB,18600,0\nsCO,mouthB,18633,0\nsCO,mouthB,18700,1\nsCO,headUDB,18733,0\nsCO,mouthB,18833,0\nsCO,headUDB,18900,1\nsCO,mouthB,18900,1\nsCO,mouthB,19000,0\nsCO,mouthB,19200,1\nsCO,mouthB,19300,0\nsCO,eyesM,19367,1\nsCO,headUDB,19400,0\nsCO,mouthB,19400,1\nsCO,mouthB,19500,0\nsCO,earsB,19567,1\nsCO,earsM,19667,0\nsCO,eyesM,19700,0\nsCO,earsB,19933,0\nsCO,headSSB,19967,1\nsCO,earsM,20067,1\nsCO,mouthB,20100,1\nsCO,mouthB,20200,0\nsCO,headUDB,20233,1\nsCO,headSSB,20467,0\nsCO,earsM,20533,0\nsCO,headSSB,20567,1\nsCO,headSSB,20633,0\nsCO,mouthB,20700,1\nsCO,mouthB,20800,0\nsCO,mouthB,20833,1\nsCO,mouthB,20933,0\nsCO,headUDB,21000,0\nsCO,mouthB,21000,1\nsCO,headSSM,21033,0\nsCO,mouthB,21100,0\nsCO,headUDM,21533,0\nsCO,headUDB,21567,1\nsCO,eyesB,21600,1\nsCO,headSSB,21633,1\nsCO,eyesB,21833,0\nsCO,mouthB,21867,1\nsCO,headUDB,21967,0\nsCO,earsB,21967,1\nsCO,mouthB,21967,0\nsCO,mouthB,22067,1\nsCO,mouthB,22267,0\nsCO,earsB,22300,0\nsCO,earsM,22300,1\nsCO,mouthB,22333,1\nsCO,mouthB,22433,0\nsCO,earsM,22467,0\nsCO,mouthB,22500,1\nsCO,mouthB,22600,0\nsCO,mouthB,22633,1\nsCO,mouthB,22700,0\nsCO,headUDB,22733,1\nsCO,earsM,22767,1\nsCO,earsB,22800,1\nsCO,mouthB,22967,1\nsCO,headSSM,23000,1\nsCO,headUDB,23067,0\nsCO,earsB,23067,0\nsCO,headUDB,23133,1\nsCO,earsB,23167,1\nsCO,earsM,23200,0\nsCO,mouthB,23300,0\nsCO,earsM,23300,1\nsCO,mouthB,23367,1\nsCO,earsM,23467,0\nsCO,eyesB,23467,1\nsCO,eyesM,23533,1\nsCO,earsM,23567,1\nsCO,headUDB,23600,0\nsCO,earsB,23667,0\nsCO,earsM,23733,0\nsCO,eyesB,23767,0\nsCO,earsB,23800,1\nsCO,mouthB,23833,0\nsCO,headUDB,23833,1\nsCO,eyesM,23833,0\nsCO,mouthB,23867,1\nsCO,eyesB,23933,1\nsCO,earsM,24033,1\nsCO,headUDM,24100,1\nsCO,headSSM,24167,0\nsCO,eyesB,24200,0\nsCO,earsB,24267,0\nsCO,headSSB,24300,0\nsCO,mouthB,24333,0\nsCO,headUDB,24333,0\nsCO,earsM,24500,0\nsCO,mouthB,25067,1\nsCO,mouthB,25167,0\nsCO,mouthB,25233,1\nsCO,mouthB,25333,0\nsCO,mouthB,25367,1\nsCO,headUDB,25500,1\nsCO,mouthB,25500,0\nsCO,headUDB,25567,0\nsCO,mouthB,25600,1\nsCO,earsB,25667,1\nsCO,mouthB,25700,0\nsCO,earsB,25733,0\nsCO,mouthB,25800,1\nsCO,mouthB,25900,0\nsCO,mouthB,26033,1\nsCO,mouthB,26133,0\nsCO,mouthB,26233,1\nsCO,mouthB,26300,0\nsCO,eyesB,26400,1\nsCO,eyesB,26567,0\nsCO,mouthB,26867,1\nsCO,eyesM,26933,1\nsCO,mouthB,26967,0\nsCO,earsM,27000,1\nsCO,headSSB,27033,1\nsCO,mouthB,27067,1\nsCO,headUDB,27133,1\nsCO,mouthB,27167,0\nsCO,earsM,27200,0\nsCO,mouthB,27233,1\nsCO,mouthB,27300,0\nsCO,eyesM,27333,0\nsCO,headSSB,27533,0\nsCO,headUDB,27700,0\nsCO,headSSB,28300,1\nsCO,earsB,28433,1\nsCO,earsB,28700,0\nsCO,eyesB,28833,1\nsCO,eyesB,28967,0\nsCO,earsB,28967,1\nsCO,earsB,29100,0\nsCO,mouthB,29200,1\nsCO,mouthB,29300,0\nsCO,mouthB,29433,1\nsCO,mouthB,29500,0\nsCO,earsM,29533,1\nsCO,headSSB,29533,0\nsCO,mouthB,29567,1\nsCO,mouthB,29700,0\nsCO,mouthB,29833,1\nsCO,mouthB,29900,0\nsCO,headUDB,29933,1\nsCO,earsM,30067,0\nsCO,headUDB,30433,0\nsCO,mouthB,30500,1\nsCO,headUDB,30533,1\nsCO,mouthB,30600,0\nsCO,headUDB,30667,0\nsCO,mouthB,30667,1\nsCO,mouthB,30733,0\nsCO,headUDB,30767,1\nsCO,mouthB,30833,1\nsCO,headUDB,30867,0\nsCO,eyesM,30900,1\nsCO,mouthB,30900,0\nsCO,mouthB,31067,1\nsCO,eyesB,31100,1\nsCO,mouthB,31200,0\nsCO,mouthB,31267,1\nsCO,eyesM,31267,0\nsCO,mouthB,31367,0\nsCO,headUDB,31433,1\nsCO,eyesB,31567,0\nsCO,mouthB,31600,1\nsCO,headSSB,31600,1\nsCO,mouthB,31733,0\nsCO,mouthB,31833,1\nsCO,mouthB,31933,0\nsCO,headUDB,31967,0\nsCO,mouthB,32000,1\nsCO,headUDB,32033,1\nsCO,mouthB,32067,0\nsCO,headUDB,32167,0\nsCO,earsB,32200,1\nsCO,mouthB,32500,1\nsCO,earsB,32533,0\nsCO,mouthB,32600,0\nsCO,headSSB,32633,0\nsCO,mouthB,32667,1\nsCO,mouthB,32767,0\nsCO,mouthB,32833,1\nsCO,mouthB,32933,0\nsCO,mouthB,33100,1\nsCO,mouthB,33167,0\nsCO,headSSB,33267,1\nsCO,earsM,33367,1\nsCO,mouthB,33367,1\nsCO,headUDB,33400,1\nsCO,mouthB,33467,0\nsCO,mouthB,33567,1\nsCO,mouthB,33667,0\nsCO,mouthB,33733,1\nsCO,mouthB,33833,0\nsCO,earsM,33900,0\nsCO,headUDM,33900,0\nsCO,mouthB,33900,1\nsCO,mouthB,34000,0\nsCO,headUDB,34067,0\nsCO,mouthB,34133,1\nsCO,mouthB,34200,0\nsCO,headSSM,34467,1\nsCO,mouthB,34567,1\nsCO,earsM,34567,1\nsCO,eyesM,34667,1\nsCO,mouthB,34667,0\nsCO,mouthB,34733,1\nsCO,earsM,34767,0\nsCO,headSSB,34800,0\nsCO,mouthB,34833,0\nsCO,eyesM,34833,0\nsCO,earsM,34867,1\nsCO,mouthB,34900,1\nsCO,mouthB,34967,0\nsCO,earsM,35033,0\nsCO,mouthB,35067,1\nsCO,eyesB,35100,1\nsCO,mouthB,35133,0\nsCO,mouthB,35333,1\nsCO,headUDB,35367,1\nsCO,mouthB,35433,0\nsCO,eyesB,35500,0\nsCO,mouthB,35500,1\nsCO,mouthB,35600,0\nsCO,headUDB,35667,0\nsCO,mouthB,35667,1\nsCO,earsB,35667,1\nsCO,mouthB,35800,0\nsCO,headUDB,35933,1\nsCO,earsB,35933,0\nsCO,eyesB,36167,1\nsCO,mouthB,36233,1\nsCO,earsB,36267,1\nsCO,mouthB,36333,0\nsCO,headUDB,36367,0\nsCO,headSSM,36367,0\nsCO,mouthB,36400,1\nsCO,eyesB,36433,0\nsCO,headUDB,36467,1\nsCO,mouthB,36600,0\nsCO,earsB,36600,0\nsCO,eyesB,36667,1\nsCO,headSSM,36867,1\nsCO,mouthB,36900,1\nsCO,eyesB,37033,0\nsCO,earsM,37067,1\nsCO,headUDB,37233,0\nsCO,mouthB,37300,0\nsCO,headSSB,37400,1\nsCO,mouthB,37433,1\nsCO,mouthB,37533,0\nsCO,mouthB,37600,1\nsCO,earsM,37600,0\nsCO,mouthB,37700,0\nsCO,mouthB,37767,1\nsCO,mouthB,37833,0\nsCO,headUDM,37933,1\nsCO,headSSB,38033,0\nsCO,headSSB,38067,1\nsCO,headSSB,38100,0\nsCO,mouthB,38100,1\nsCO,earsB,38133,1\nsCO,mouthB,38200,0\nsCO,earsB,38267,0\nsCO,eyesM,38500,1\nsCO,mouthB,38800,1\nsCO,eyesM,38900,0\nsCO,mouthB,38900,0\nsCO,headSSB,38933,1\nsCO,mouthB,38967,1\nsCO,mouthB,39033,0\nsCO,mouthB,39133,1\nsCO,mouthB,39200,0\nsCO,mouthB,39267,1\nsCO,mouthB,39333,0\nsCO,headUDB,39333,1\nsCO,headUDB,39500,0\nsCO,mouthB,39500,1\nsCO,eyesB,39567,1\nsCO,mouthB,39633,0\nsCO,mouthB,39800,1\nsCO,mouthB,39867,0\nsCO,eyesB,39867,0\nsCO,headSSB,39900,0\nsCO,headSSM,40333,0\nsCO,mouthB,40500,1\nsCO,mouthB,40600,0\nsCO,mouthB,40667,1\nsCO,mouthB,40767,0\nsCO,mouthB,40833,1\nsCO,earsM,40833,1\nsCO,mouthB,40933,0\nsCO,headSSM,41033,1\nsCO,mouthB,41033,1\nsCO,mouthB,41100,0\nsCO,earsB,41100,1\nsCO,mouthB,41200,1\nsCO,headSSM,41233,0\nsCO,mouthB,41267,0\nsCO,earsB,41333,0\nsCO,mouthB,41333,1\nsCO,earsM,41367,0\nsCO,headSSM,41367,1\nsCO,mouthB,41433,0\nsCO,headUDB,41467,1\nsCO,earsM,41667,1\nsCO,mouthB,41800,1\nsCO,earsM,41867,0\nsCO,mouthB,41900,0\nsCO,mouthB,41933,1\nsCO,headSSM,41967,0\nsCO,headSSM,42000,1\nsCO,mouthB,42033,0\nsCO,mouthB,42133,1\nsCO,headSSM,42167,0\nsCO,mouthB,42233,0\nsCO,mouthB,42300,1\nsCO,earsM,42367,1\nsCO,mouthB,42400,0\nsCO,headUDB,42433,0\nsCO,eyesM,42467,1\nsCO,earsM,42700,0\nsCO,headSSB,42700,1\nsCO,eyesM,42733,0\nsCO,mouthB,42933,1\nsCO,mouthB,43033,0\nsCO,mouthB,43100,1\nsCO,mouthB,43167,0\nsCO,mouthB,43267,1\nsCO,mouthB,43333,0\nsCO,mouthB,43433,1\nsCO,eyesB,43467,1\nsCO,mouthB,43533,0\nsCO,mouthB,43600,1\nsCO,mouthB,43700,0\nsCO,mouthB,43767,1\nsCO,mouthB,43867,0\nsCO,eyesB,43900,0\nsCO,headSSM,44133,1\nsCO,headUDB,44167,1\nsCO,headSSB,44200,0\nsCO,earsB,44400,1\nsCO,mouthB,44467,1\nsCO,headUDB,44500,0\nsCO,earsB,44500,0\nsCO,mouthB,44567,0\nsCO,mouthB,44633,1\nsCO,headUDB,44633,1\nsCO,earsB,44700,1\nsCO,mouthB,44733,0\nsCO,headSSB,44800,1\nsCO,mouthB,44800,1\nsCO,earsB,44900,0\nsCO,mouthB,44900,0\nsCO,mouthB,44967,1\nsCO,mouthB,45067,0\nsCO,headUDM,45233,0\nsCO,headUDB,45333,0\nsCO,mouthB,45433,1\nsCO,earsM,45467,1\nsCO,mouthB,45533,0\nsCO,earsM,45600,0\nsCO,mouthB,45633,1\nsCO,earsM,45700,1\nsCO,mouthB,45733,0\nsCO,mouthB,45800,1\nsCO,mouthB,45900,0\nsCO,mouthB,46000,1\nsCO,mouthB,46067,0\nsCO,earsM,46067,0\nsCO,headSSB,46167,0\nsCO,headUDM,46200,1\nsCO,mouthB,46300,1\nsCO,headUDB,46333,1\nsCO,mouthB,46400,0\nsCO,mouthB,46567,1\nsCO,headUDB,46600,0\nsCO,mouthB,46667,0\nsCO,eyesB,46900,1\nsCO,mouthB,47000,1\nsCO,mouthB,47100,0\nsCO,eyesB,47333,0\nsCO,headUDM,47367,0\nsCO,mouthB,47367,1\nsCO,mouthB,47433,0\nsCO,mouthB,47500,1\nsCO,headUDB,47500,1\nsCO,mouthB,47600,0\nsCO,headUDB,47633,0\nsCO,mouthB,47700,1\nsCO,earsB,47767,1\nsCO,mouthB,47767,0\nsCO,eyesM,47833,1\nsCO,earsB,47967,0\nsCO,eyesM,48100,0\nsCO,earsM,48167,1\nsCO,mouthB,48400,1\nsCO,mouthB,48467,0\nsCO,mouthB,48567,1\nsCO,headUDM,48600,1\nsCO,mouthB,48667,0\nsCO,mouthB,48733,1\nsCO,earsM,48767,0\nsCO,headSSB,48833,1\nsCO,mouthB,48833,0\nsCO,headUDB,48933,1\nsCO,headUDB,49033,0\nsCO,mouthB,49067,1\nsCO,mouthB,49133,0\nsCO,mouthB,49200,1\nsCO,mouthB,49300,0\nsCO,headUDB,49433,1\nsCO,mouthB,49467,1\nsCO,headSSM,49500,0\nsCO,mouthB,49567,0\nsCO,mouthB,49633,1\nsCO,mouthB,49733,0\nsCO,headSSB,49767,0\nsCO,mouthB,49800,1\nsCO,mouthB,49867,0\nsCO,mouthB,49967,1\nsCO,mouthB,50067,0\nsCO,headUDB,50167,0\nsCO,headUDM,50700,0\nsCO,headUDM,50767,1\nsCO,eyesB,50900,1\nsCO,eyesM,51133,1\nsCO,eyesB,51233,0\nsCO,mouthB,51333,1\nsCO,earsB,51433,1\nsCO,mouthB,51467,0\nsCO,eyesM,51500,0\nsCO,mouthB,51500,1\nsCO,headSSB,51500,1\nsCO,mouthB,51600,0\nsCO,mouthB,51667,1\nsCO,mouthB,51733,0\nsCO,earsM,51867,1\nsCO,earsB,51867,0\nsCO,headSSB,52000,0\nsCO,headUDM,52067,0\nsCO,headUDM,52133,1\nsCO,headSSB,52167,1\nsCO,earsM,52267,0\nsCO,headSSM,52333,1\nsCO,mouthB,52867,1\nsCO,eyesB,52900,1\nsCO,mouthB,52967,0\nsCO,headSSB,52967,0\nsCO,mouthB,53033,1\nsCO,headSSM,53100,0\nsCO,mouthB,53133,0\nsCO,eyesB,53167,0\nsCO,mouthB,53200,1\nsCO,mouthB,53300,0\nsCO,mouthB,53367,1\nsCO,mouthB,53500,0\nsCO,headUDM,53767,0\nsCO,headUDM,53800,1\nsCO,headUDM,53867,0\nsCO,headUDM,53900,1\nsCO,mouthB,54067,1\nsCO,headUDM,54100,0\nsCO,mouthB,54167,0\nsCO,mouthB,54233,1\nsCO,mouthB,54300,0\nsCO,headSSB,54700,1\nsCO,headUDB,55000,1\nsCO,earsB,55167,1\nsCO,eyesM,55267,1\nsCO,earsB,55333,0\nsCO,mouthB,55467,1\nsCO,mouthB,55567,0\nsCO,eyesM,55600,0\nsCO,mouthB,55633,1\nsCO,mouthB,55733,0\nsCO,earsM,55733,1\nsCO,headUDM,55767,1\nsCO,eyesB,55800,1\nsCO,mouthB,55967,1\nsCO,headUDB,56033,0\nsCO,mouthB,56067,0\nsCO,mouthB,56100,1\nsCO,eyesB,56100,0\nsCO,headUDB,56133,1\nsCO,earsB,56200,1\nsCO,mouthB,56200,0\nsCO,headSSB,56300,0\nsCO,headSSB,56333,1\nsCO,earsB,56333,0\nsCO,earsB,56433,1\nsCO,mouthB,56500,1\nsCO,headSSB,56500,0\nsCO,headUDB,56533,0\nsCO,mouthB,56567,0\nsCO,earsB,56567,0\nsCO,earsM,56567,0\nsCO,mouthB,56633,1\nsCO,headUDB,56633,1\nsCO,mouthB,56733,0\nsCO,mouthB,56800,1\nsCO,mouthB,56900,0\nsCO,headUDB,56900,0\nsCO,headUDB,56933,1\nsCO,headSSM,57033,1\nsCO,headUDB,57067,0\nsCO,mouthB,57133,1\nsCO,headUDM,57167,0\nsCO,headUDM,57200,1\nsCO,mouthB,57233,0\nsCO,headSSB,57300,1\nsCO,mouthB,57300,1\nsCO,mouthB,57400,0\nsCO,headUDB,57467,1\nsCO,mouthB,57600,1\nsCO,headUDB,57700,0\nsCO,mouthB,57700,0\nsCO,headSSB,57967,0\nsCO,headUDM,58033,0\nsCO,headSSM,58067,0\nsCO,mouthB,58067,1\nsCO,mouthB,58167,0\nsCO,mouthB,58233,1\nsCO,headUDB,58267,1\nsCO,mouthB,58333,0\nsCO,mouthB,58400,1\nsCO,earsM,58400,1\nsCO,mouthB,58500,0\nsCO,earsM,58567,0\nsCO,mouthB,58600,1\nsCO,mouthB,58733,0\nsCO,mouthB,58833,1\nsCO,mouthB,58967,0\nsCO,headUDB,59000,0\nsCO,eyesM,59000,1\nsCO,eyesM,59267,0\nsCO,headSSM,59400,1\nsCO,eyesB,59467,1\nsCO,headSSM,59500,0\nsCO,mouthB,59600,1\nsCO,mouthB,59667,0\nsCO,eyesB,59667,0\nsCO,headSSM,60000,0\nsCO,BLIGHT,61433,0\nsCO,MLIGHT,61433,0\n";
    const char STREAM_MOOSEBISON_1_KNIFE_MAN_BILL_CHAR_STREAM_LOOP[] PROGMEM = "sCO,BLIGHT,0,1\nsCO,MLIGHT,0,1\n";
    const char STREAM_MOOSEBISON_2_CHAR_STREAM[] PROGMEM = "";
    const char STREAM_MOOSEBISON_2_CHAR_STREAM_LOOP[] PROGMEM = "";
    const char STREAM_MOOSEBISON_3_CHAR_STREAM[] PROGMEM = "";
    const char STREAM_MOOSEBISON_3_CHAR_STREAM_LOOP[] PROGMEM = "";

    CommandStream setupStream = CommandStream(SETUP_CHAR_STREAM, 0);
    CommandStream stream_Moose_1_Bugaboo_Nelle = CommandStream(STREAM_MOOSE_1_BUGABOO_NELLE_CHAR_STREAM, 46000, STREAM_MOOSE_1_BUGABOO_NELLE_CHAR_STREAM_LOOP, 0);
    CommandStream stream_Moose_2 = CommandStream(STREAM_MOOSE_2_CHAR_STREAM, 20000, STREAM_MOOSE_2_CHAR_STREAM_LOOP, 0);
    CommandStream stream_Moose_3 = CommandStream(STREAM_MOOSE_3_CHAR_STREAM, 20000, STREAM_MOOSE_3_CHAR_STREAM_LOOP, 0);
    CommandStream stream_Bison_1_BC_Shower = CommandStream(STREAM_BISON_1_BC_SHOWER_CHAR_STREAM, 30000, STREAM_BISON_1_BC_SHOWER_CHAR_STREAM_LOOP, 0);
    CommandStream stream_Bison_2 = CommandStream(STREAM_BISON_2_CHAR_STREAM, 20000, STREAM_BISON_2_CHAR_STREAM_LOOP, 0);
    CommandStream stream_Bison_3 = CommandStream(STREAM_BISON_3_CHAR_STREAM, 20000, STREAM_BISON_3_CHAR_STREAM_LOOP, 0);
    CommandStream stream_MooseBison_1_Knife_Man_Bill = CommandStream(STREAM_MOOSEBISON_1_KNIFE_MAN_BILL_CHAR_STREAM, 63000, STREAM_MOOSEBISON_1_KNIFE_MAN_BILL_CHAR_STREAM_LOOP, 0);
    CommandStream stream_MooseBison_2 = CommandStream(STREAM_MOOSEBISON_2_CHAR_STREAM, 20000, STREAM_MOOSEBISON_2_CHAR_STREAM_LOOP, 0);
    CommandStream stream_MooseBison_3 = CommandStream(STREAM_MOOSEBISON_3_CHAR_STREAM, 20000, STREAM_MOOSEBISON_3_CHAR_STREAM_LOOP, 0);    

    CommandStream *getCommandStream(byte streamID)
    {
        switch (streamID)
        {
        case 0:
            return &stream_Moose_1_Bugaboo_Nelle;
        case 1:
            return &stream_Moose_2;
        case 2:
            return &stream_Moose_3;
        case 3:
            return &stream_Bison_1_BC_Shower;
        case 4:
            return &stream_Bison_2;
        case 5:
            return &stream_Bison_3;
        case 6:
            return &stream_MooseBison_1_Knife_Man_Bill;
        case 7:
            return &stream_MooseBison_2;
        case 8:
            return &stream_MooseBison_3;
        default:
            return NULL;
        }
    }

    CommandStream *getSetupCommandStream()
    {
        return &setupStream;
    }
} // namespace GeneratedCommandStreams