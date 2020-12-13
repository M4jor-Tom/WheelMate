#include "UnlinearComponent.h"

UnlinearComponent::UnlinearComponent(const short int &controlPort, const short int &negPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower):
    Electric(controlPort, negPort, measurePort, maxVoltage, maxCurrent, maxPower),
    _inlineResistorP(nullptr)
{

}

UnlinearComponent::UnlinearComponent(const UnlinearComponent &e):
    Electric(e._controlPort, e._negPort, e._measurePort, e._maxVoltage, e._maxCurrent, e._maxPower)
{

}

UnlinearComponent::~UnlinearComponent()
{

}