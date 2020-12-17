#include "UnlinearComponent.h"

UnlinearComponent::UnlinearComponent(const short int &controlPort, const short int &negPort, const short int &measurePort, const short int &negMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower):
    Electric(controlPort, negPort, measurePort, negMeasurePort, maxVoltage, maxCurrent, maxPower)
{

}

UnlinearComponent::UnlinearComponent(const UnlinearComponent &u):
    Electric(u._controlPort, u._negPort, u._measurePort, u._negMeasurePort, u._maxVoltage, u._maxCurrent, u._maxPower)
{

}

UnlinearComponent::~UnlinearComponent()
{

}