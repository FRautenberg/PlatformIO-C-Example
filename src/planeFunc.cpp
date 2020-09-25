
#include "planeFunc.h"

//=======================================================
bool setPlaneSpeed(TPlane *plane, uint8_t speed)
{
    plane->speed = speed;
}

//=======================================================
// Showcase, that this subfile can use new libary which is unkown to the main
void I2cThing()
{
    Wire.begin(); // join i2c bus (address optional for master) (not recommended use)
    Wire.beginTransmission(44); // transmit to device #44 (0x2c)
    // device address is specified in datasheet
    Wire.write(byte(0x00)); // sends instruction byte
    Wire.endTransmission(); // stop transmitting
}
