#pragma once

#include "Electric.h"

class Branch: public Electric
{
private:
    cusi _componentsCount;
    Electric **_componentsPointers;
public:
    //CONSTRUCTORS
    Branch(cusi &componentsCount);

    //GETTERS
    double getCurrent() const;
    Electric *getElectric(cusi &offset) const;

    //MEASURERS
    double measureVoltage() const override;
    
    //SETTERS
    bool setPower(const double &targetPower);
    bool setVoltage(const double &targetVoltage);

    bool setElectric(Electric *e);
    bool setElectric(Electric *e, cusi &offset);
};