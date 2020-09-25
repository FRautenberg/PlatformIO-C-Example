#ifndef main_h   // if x.h hasn't been included yet...
#define main_h   //   #define this so the compiler knows it has been included

    #include <Arduino.h>    
    
    //==============================================================
    //RADIO Data
    typedef struct _Plane{ 
        uint8_t speed;
        bool isFlying;
    } TPlane;
    TPlane *plane;    // Global varible, which gets declared here and initialised later

    ledController *ledIsFlying;
#endif