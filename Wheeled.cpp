#include "Wheeled.h"

Wheeled::Wheeled(const short int &controlPort, const short int &measurePort, const bool &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &wheelRadius):
    Motor(controlPort, measurePort, defaultRotation, maxVoltage, maxCurrent, maxPower),
    _wheelRadius(wheelRadius)
{

}

Wheeled::Wheeled(const short int &controlPort, const short int &measurePort, const bool &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &wheelRadius, const double &proportionnal, const double &integral, const double &derivate):
    Motor(controlPort, measurePort, defaultRotation, maxVoltage, maxCurrent, maxPower, proportionnal, integral, derivate),
    _wheelRadius(wheelRadius)
{

}

Wheeled::Wheeled(const Wheeled& w):
    Motor(w._controlPort, w._measurePort, w._defaultRotation, w._maxVoltage, w._maxCurrent, w._maxPower, w._proportionnal, w._integral, w._derivate),
    _wheelRadius(w._wheelRadius)
{

}

Wheeled::~Wheeled()
{

}