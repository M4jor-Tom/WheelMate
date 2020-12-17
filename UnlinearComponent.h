#pragma once

#include "LinearComponent.h"

class UnlinearComponent: public Electric
{
protected:
public:
    UnlinearComponent(const short int &controlPort, const short int &negPort, const short int &measurePort, const short int &negMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower);
    UnlinearComponent(const UnlinearComponent &u);
    ~UnlinearComponent();
};