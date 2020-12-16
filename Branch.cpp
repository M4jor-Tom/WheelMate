#include "Branch.h"

Branch::Branch(const unsigned short int &componentsCount)
{
    componentsPointers = new Electric*[componentsCount];

    unsigned short int i;
    for(i = 0; i < componentsCount; i++)
        componentsPointers[i] = nullptr;
}

double Branch::getCurrent() const
{
    return 0.0;
}

bool Branch::setPower(const double &targetPower)
{
    return false;
}


bool Branch::setVoltage(const double &targetVoltage)
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

double Branch::measureVoltage() const
{
    return 0.0;
}