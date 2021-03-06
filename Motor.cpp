#include "Motor.h"

Motor::Motor(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower):
    UnlinearComponent(controlPort, negPort, measurePort, negMeasurePort, maxVoltage, maxCurrent, maxPower),
    _defaultRotation(defaultRotation),
    _proportionnal(1.0),
    _integral(1.0),
    _derivate(1.0)
{

}

Motor::Motor(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const unsigned short int &defaultRotation, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &proportionnal, const double &integral, const double &derivate):
    UnlinearComponent(controlPort, negPort, measurePort, negMeasurePort, maxVoltage, maxCurrent, maxPower),
    _defaultRotation(defaultRotation),
    _proportionnal(proportionnal),
    _integral(integral),
    _derivate(derivate),
    _targetAngularSpeed(0.0)
{

}

Motor::Motor(const Motor& m):
    UnlinearComponent(m._controlPort, m._negPort, m._measurePort, m._negMeasurePort, m._maxVoltage, m._maxCurrent, m._maxPower),
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