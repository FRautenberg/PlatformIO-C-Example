#ifndef __plane_func_h__   // if x.h hasn't been included yet...
#define __plane_func_h__   //   #define this so the compiler knows it has been included

    #include <Arduino.h>
    #include "main.h"   //Libary to get their datatyüe TPlane

    #include <Wire.h>   //Libary for new function

    //==============================================================
    //extending the functions of main

    bool setPlaneSpeed(TPlane *plane, uint8_t speed);   //Using Datatype from main in this file
    void I2cThing();     // Showcase, that this subfile can use new libary which is unkown to the main
#endif