#include "Electric.h"

class Motor: public Electric
{
protected:
    float _proportionnal, _integral, _derivate, _targetAngularSpeed;
public:
    Motor(const unsigned short int &port, const float &maxVoltage, const float &maxCurrent, const float &maxPower);
    Motor(const unsigned short int &port, const float &maxVoltage, const float &maxCurrent, const float &maxPower, const float &proportionnal, const float &integral, const float &derivate);
    Motor(const Motor& m);
    ~Motor();

    float measureAngular() const;
    bool accelerates() const;
};