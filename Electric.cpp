#include "Electric.h"
#include "Arduino.h"

Electric::Electric():
    _controlPort(UNSET),
    _negPort(UNSET),
    _measurePort(UNSET),
    _maxVoltage(0.0),
    _maxCurrent(0.0),
    _maxPower(0.0),
    _voltageFactor(1.0),
    _security(true)
{

}

Electric::Electric(const short int &controlPort, const short int &negPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower):
    _controlPort(controlPort),
    _negPort(negPort),
    _measurePort(measurePort),
    _maxVoltage(maxVoltage),
    _maxCurrent(maxCurrent),
    _maxPower(maxPower),
    _voltageFactor(1.0),
    _security(true)
{

}

Electric::Electric(const Electric &e):
    _controlPort(e._controlPort),
    _negPort(e._negPort),
    _measurePort(e._measurePort),
    _maxVoltage(e._maxVoltage),
    _maxCurrent(e._maxCurrent),
    _maxPower(e._maxPower),
    _voltageFactor(e._voltageFactor),
    _security(e._security)
{

}

Electric::~Electric()
{

}

void Electric::setSecurity(const bool &status)
{
    _security = status;
}


bool Electric::getSecurity() const
{
    return _security;
}

double Electric::measureVoltage() const
{
    return analogRead(_measurePort) / _voltageFactor;
}