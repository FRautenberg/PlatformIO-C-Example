#include "ledController.h"

void ledController::begin()
{
    pinMode(_LED_PIN, OUTPUT);
    digitalWrite(_LED_PIN, _lastLedState);
}

//=======================================
void ledController::DoubleFlash()
{
    digitalWrite(_LED_PIN, !_lastLedState);
    _lastLedState = !_lastLedState;
    delay(100);

    digitalWrite(_LED_PIN, !_lastLedState);
    _lastLedState = !_lastLedState;
    delay(100);
}

//=======================================
void ledController::setLed(bool newState)
{
    _lastLedState = newState;
    digitalWrite(_LED_PIN, _lastLedState);
}

//=======================================
bool ledController::getLedState()
{
    return _lastLedState;
}

//=======================================
String ledController::toString()
{
    String out = "";
    out += "LedController, Ledstate: ";
    out += String(_lastLedState);
    out += " ";
    return out;
}