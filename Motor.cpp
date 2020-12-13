#include "Motor.h"

Motor::Motor(const short int &controlPort, const short int &measurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower):
    UnlinearComponent(controlPort, measurePort, maxVoltage, maxCurrent, maxPower),
    _defaultRotation(defaultRotation),
    _proportionnal(1.0),
    _integral(1.0),
    _derivate(1.0)
{

}

Motor::Motor(const short int &controlPort, const short int &measurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &proportionnal, const double &integral, const double &derivate):
    UnlinearComponent(controlPort, measurePort, maxVoltage, maxCurrent, maxPower),
    _defaultRotation(defaultRotation),
    _proportionnal(proportionnal),
    _integral(integral),
    _derivate(derivate),
    _targetAngularSpeed(0.0)
{

}

Motor::Motor(const Motor& m):
    UnlinearComponent(m._controlPort, m._measurePort, m._maxVoltage, m._maxCurrent, m._maxPower),
    _defaultRotation(m._defaultRotation),
    _proportionnal(m._proportionnal),
    _integral(m._integral),
    _derivate(m._derivate)
{

}

Motor::~Motor()
{

}


double Motor::measureAngular() const
{
    return 0.0;
}

bool Motor::accelerates() const
{
    return _targetAngularSpeed > measureAngular();
}