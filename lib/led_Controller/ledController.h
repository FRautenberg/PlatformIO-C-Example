#ifndef __ledController_h__
#define __ledController_h__
//based on https://github.com/huilab/HoneywellTruStabilitySPI/blob/master/src/HoneywellTruStabilitySPI.h

#include <Arduino.h>

class ledController
{
    private:
        const uint8_t _LED_PIN;     //pin number
        bool _lastLedState;         //state of led (on or off)

        //Private Methode, only reachable for this public methodes
        void DoubleFlash();

  public:
        // Constructor with default values and direct variable assigment
        ledController(const uint8_t LED_PIN, const bool ledState = 0)
        : _LED_PIN(LED_PIN), _lastLedState(ledState) {}

        // Methode which needs to be called before using this class
        void begin();
        void setLed(bool newState);
        bool getLedState();
        String toString();    
};

#endif // End __ledController_h__ include guard