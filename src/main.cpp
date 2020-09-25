#include "ledController.h"  //Own Libary to controll LEDs, included before main.h, because it is need in it Location: /lib/led_Controller/ledController.h

#include "main.h"
#include "pins.h"       //Own Assignment, Location: /include/pins.h
#include "planeFunc.h"  //Own Libary to add Functions to the main, Location: /include/planeFunc.h

// This example shows a plane with parameters and their functions to operate

void setup(void)
{
  //==============================================================
  //Initialising vars and classes
  plane = new TPlane;     // plane holds basic parameters on the plane
  ledIsFlying = new ledController(PIN_LED1);   // this class controlls the status led
  ledIsFlying->begin();   //Initialise the class

  
  Serial.begin(115200);
  Serial.println("HELLO WORLD Example");
}

void loop()
{
  //==============================================================
  //Update Inputs  
  plane->isFlying = random(1);
  int planeSpeed = random(255);

  //==============================================================
  //Update Outputs
  ledIsFlying->setLed(plane->isFlying);  
  setPlaneSpeed(plane, planeSpeed);
  I2cThing();

  //==============================================================
  //Debug
  String debug = "";
  debug += ledIsFlying->toString();
  Serial.println(debug);
}