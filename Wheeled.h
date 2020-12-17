#pragma once

#include "Motor.h"

class Wheeled: public Motor
{
private:
    const double _wheelRadius;
public:
    //CONSTRUCTORS / DESTRUCTORS
    Wheeled(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &wheelRadius);
    Wheeled(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &wheelRadius, const double &proportionnal, const double &integral, const double &derivate);
    Wheeled(const Wheeled& w);
    ~Wheeled();
};