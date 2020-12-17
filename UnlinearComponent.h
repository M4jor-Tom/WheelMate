#pragma once

#include "LinearComponent.h"

class UnlinearComponent: public Electric
{
protected:
public:
    UnlinearComponent(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower);
    UnlinearComponent(const UnlinearComponent &u);
    ~UnlinearComponent();
};