#ifndef GeneratedCommandStreams_h
#define GeneratedCommandStreams_h

#include "Arduino.h"
#include "src/BottangoCore.h"

namespace GeneratedCommandStreams
{
    //// GENERATED CODE. You probably don't need to change any of the below ////
    CommandStream *getSetupCommandStream();
    CommandStream *getCommandStream(byte streamID);
    void updatePlayStatus();

    extern CommandStream setupStream;
    extern CommandStream stream_Moose_1_Bugaboo_Nelle;
    extern CommandStream stream_Moose_1_Bugaboo_Nelle_loop;
    extern CommandStream stream_Moose_2;
    extern CommandStream stream_Moose_2_loop;
    extern CommandStream stream_Moose_3;
    extern CommandStream stream_Moose_3_loop;
    extern CommandStream stream_Bison_1_BC_Shower;
    extern CommandStream stream_Bison_1_BC_Shower_loop;
    extern CommandStream stream_Bison_2;
    extern CommandStream stream_Bison_2_loop;
    extern CommandStream stream_Bison_3;
    extern CommandStream stream_Bison_3_loop;
    extern CommandStream stream_MooseBison_1_Knife_Man_Bill;
    extern CommandStream stream_MooseBison_1_Knife_Man_Bill_loop;
    extern CommandStream stream_MooseBison_2;
    extern CommandStream stream_MooseBison_2_loop;
    extern CommandStream stream_MooseBison_3;
    extern CommandStream stream_MooseBison_3_loop;

} // namespace GeneratedCommandStreams

#endif
