#pragma once

#include "Branch.h"
#include "Wheeled.h"

class MeasureBranch: public Branch
{
private:
    const bool _ammeterIsTop;
public:
    MeasureBranch(cusi &linearPort, cusi &linearMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &resistance, Electric *managed, const bool &ammeterIsTop);
};