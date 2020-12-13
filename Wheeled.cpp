#include "Wheeled.h"

Wheeled::Wheeled(const unsigned short int port, const float &maxVoltage, const float &maxCurrent, const float &maxPower, const float &wheelRadius):
    Motor(port, maxVoltage, maxCurrent, maxPower),
    _wheelRadius(wheelRadius)
{

}

Wheeled::Wheeled(const unsigned short int port, const float &maxVoltage, const float &maxCurrent, const float &maxPower, const float &wheelRadius, const float &proportionnal, const float &integral, const float &derivate):
    Motor(port, maxVoltage, maxCurrent, maxPower, proportionnal, integral, derivate),
    _wheelRadius(wheelRadius)
{

}

Wheeled::Wheeled(const Wheeled& w):
    Motor(w._port, w._maxVoltage, w._maxCurrent, w._maxPower, w._proportionnal, w._integral, w._derivate),
    _wheelRadius(w._wheelRadius)
{

}

Wheeled::~Wheeled()
{

}