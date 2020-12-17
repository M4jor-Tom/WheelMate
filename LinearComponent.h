#pragma once

#include "Electric.h"

class LinearComponent: public Electric
{
protected:
    double _resistance;

public:
    //CONSTRUCTORS / DESTRUCTORS
    LinearComponent(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &resistance);
    LinearComponent(const LinearComponent &l);
    ~LinearComponent();

    //SETTERS
    void setSecurity(const bool &status);

    //GETTERS
    double getResistance() const;
};