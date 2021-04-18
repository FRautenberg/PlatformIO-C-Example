#ifndef main_h   // if x.h hasn't been included yet...
#define main_h   //   #define this so the compiler knows it has been included

    #include <Arduino.h>    
    
    //==============================================================
    //RADIO Data
    typedef struct _Plane{ 
        uint8_t speed;
        bool isFlying;
    } TPlane;

    extern uint8_t altitude;       //Global variable and not a pointer, they have to be named in Header but defined in .cpp
    TPlane *plane;    // Global varible, which gets declared here and initialised later
    ledController *ledIsFlying;
#endif