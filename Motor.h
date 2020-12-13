#pragma once

#include "UnlinearComponent.h"

class Motor: public UnlinearComponent
{
protected:
    double _proportionnal, _integral, _derivate, _targetAngularSpeed;
    bool _defaultRotation;
public:
    //CONSTRUCTORS / DESTRUCTORS
    Motor(const short int &controlPort, const short int &negPort, const short int &measurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower);
    Motor(const short int &controlPort, const short int &negPort, const short int &measurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &proportionnal, const double &integral, const double &derivate);
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