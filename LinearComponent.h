#pragma once

#include "Electric.h"

class LinearComponent: public Electric
{
protected:
    double _resistance;

public:
    //CONSTRUCTORS / DESTRUCTORS
    LinearComponent(const short int &controlPort, const short int &negPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &resistance);
    LinearComponent(const LinearComponent &l);
    ~LinearComponent();

    //SETTERS
    void setSecurity(const bool &status);

    //GETTERS
    double getResistance() const;
};