#include "LinearComponent.h"
#include <math.h>


LinearComponent::LinearComponent(const short int &controlPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &resistance):
    Electric(controlPort, measurePort, maxVoltage, maxCurrent, maxPower),
    _resistance(resistance)
{

}

LinearComponent::LinearComponent(const LinearComponent &l):
    Electric(l._controlPort, l._measurePort, l._maxVoltage, l._maxCurrent, l._maxPower),
    _resistance(l._resistance)
{

}

LinearComponent::~LinearComponent()
{

}

bool LinearComponent::setPower(const double &targetPower)
{
    return setVoltage(sqrt(targetPower * _resistance));
}

double LinearComponent::getCurrent() const
{
    return _targetVoltage / _resistance;
}