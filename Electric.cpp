#include "Electric.h"
#include "Arduino.h"

Electric::Electric():
    _controlPort(UNSET),
    _negPort(UNSET),
    _measurePort(UNSET),
    _negMeasurePort(UNSET),
    _maxVoltage(0.0),
    _maxCurrent(0.0),
    _maxPower(0.0),
    _voltageFactor(1.0),
    _security(true)
{

}

Electric::Electric(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower):
    _controlPort(controlPort),
    _negPort(negPort),
    _measurePort(measurePort),
    _negMeasurePort(negMeasurePort),
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
    _negMeasurePort(e._negMeasurePort),
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

si Electric::getPort(csi &port) const
{
    switch(port)
    {
        case PPORT:
            return _controlPort;
            break;
        
        case NPORT:
            return _negPort;
            break;
        
        case PMPORT:
            return _measurePort;
            break;
        
        case NMPORT:
            return _negPort;
            break;
    }
    return ERROR;
}

double Electric::measureVoltage() const
{
    if(_negMeasurePort != UNSET && _negMeasurePort != MASS)
        return (analogRead(_measurePort) - analogRead(_negMeasurePort)) / _voltageFactor;
    
    return analogRead(_measurePort) / _voltageFactor;
}