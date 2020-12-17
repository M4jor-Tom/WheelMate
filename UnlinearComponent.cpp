#include "UnlinearComponent.h"

UnlinearComponent::UnlinearComponent(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower):
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