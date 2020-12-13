#include "UnlinearComponent.h"

UnlinearComponent::UnlinearComponent(const short int &controlPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower):
    Electric(controlPort, measurePort, maxVoltage, maxCurrent, maxPower),
    _inlineResistorP(nullptr)
{

}

UnlinearComponent::UnlinearComponent(const short int &controlPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower, LinearComponent *inlineResistorP):
    Electric(controlPort, measurePort, maxVoltage, maxCurrent, maxPower),
    _inlineResistorP(inlineResistorP)
{

}

UnlinearComponent::UnlinearComponent(const UnlinearComponent &e):
    Electric(e._controlPort, e._measurePort, e._maxVoltage, e._maxCurrent, e._maxPower)
{
    _inlineResistorP = e._inlineResistorP == nullptr
        ? nullptr
        : new LinearComponent(*(e._inlineResistorP));
}

UnlinearComponent::~UnlinearComponent()
{

}


double UnlinearComponent::getCurrent() const
{
    if(_inlineResistorP != nullptr)
        return _inlineResistorP -> measureVoltage() / _inlineResistorP -> getResistance();
    return 0.0;
}

bool UnlinearComponent::setPower(const double &targetPower)
{
    return false;
}