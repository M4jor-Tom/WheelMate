#pragma once

#include "Motor.h"

class Wheeled: public Motor
{
private:
    const double _wheelRadius;
public:
    //CONSTRUCTORS / DESTRUCTORS
    Wheeled(const short int &controlPort, const short int &negPort, const short int &measurePort, const bool &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &wheelRadius);
    Wheeled(const short int &controlPort, const short int &negPort, const short int &measurePort, const bool &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &wheelRadius, const double &proportionnal, const double &integral, const double &derivate);
    Wheeled(const Wheeled& w);
    ~Wheeled();
};