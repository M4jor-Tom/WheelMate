#pragma once

#include "LinearComponent.h"

class UnlinearComponent: public Electric
{
protected:
    LinearComponent *_inlineResistorP;
public:
    UnlinearComponent(const short int &controlPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower);
    UnlinearComponent(const short int &controlPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower, LinearComponent *inlineResistorP);
    UnlinearComponent(const UnlinearComponent &e);
    ~UnlinearComponent();
    
    double getCurrent() const override;

    //SETTERS
    bool setPower(const double &targetPower) override;
};