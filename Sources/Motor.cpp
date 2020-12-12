#include "../Headers/Motor.h"

Motor::Motor(const unsigned short int &port, const float &maxVoltage, const float &maxCurrent, const float &maxPower):
    Motor(
        port,
        maxVoltage,
        maxCurrent,
        maxPower,
        1.0,
        1.0,
        1.0,
        0.0
    )
{

}

Motor::Motor(const unsigned short int &port, const float &maxVoltage, const float &maxCurrent, const float &maxPower, const float &proportionnal, const float &integral, const float &derivate):
    Electric(port, maxVoltage, maxCurrent, maxPower),
    _proportionnal(proportionnal),
    _integral(integral),
    _derivate(derivate),
    _targetAngularSpeed(0.0)
{

}

Motor::Motor(const Motor& m):
    Electric(m._port, m._maxVoltage, m._maxCurrent, m._maxPower),
    _proportionnal(m._proportionnal),
    _integral(m._integral),
    _derivate(m._derivate)
{

}

Motor::~Motor()
{

}


float Motor::measureAngular() const
{
    return 0.0;
}

bool Motor::accelerates() const
{
    return _targetAngularSpeed > measureAngular();
}