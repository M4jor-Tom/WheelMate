#include "Electric.h"
#include "Arduino.h"

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

bool Electric::setVoltage(const double &targetVoltage)
{
    bool ret = true;
    if(targetVoltage > _maxVoltage)
    {
        _targetVoltage = _security
            ? _maxVoltage
            : targetVoltage;
        
        ret = false;
    }
    else
        _targetVoltage = targetVoltage;
    
    return ret;
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