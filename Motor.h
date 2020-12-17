#pragma once

#include "UnlinearComponent.h"

class Motor: public UnlinearComponent
{
protected:
    double _proportionnal, _integral, _derivate, _targetAngularSpeed;
    bool _defaultRotation;
public:
    //CONSTRUCTORS / DESTRUCTORS
    Motor(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower);
    Motor(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &proportionnal, const double &integral, const double &derivate);
    Motor(const Motor& m);
    ~Motor();

    //GETTERS
    double measureAngular() const;
    bool accelerates() const;

    //CONSTANTS
    static const unsigned short int
        CLOCKWISE = 1,
        COUNTERCLOCKWISE = 0;
};