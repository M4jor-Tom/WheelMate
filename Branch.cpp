#include "Branch.h"

Branch::Branch(const unsigned short int &componentsCount): _componentsCount(componentsCount)
{
    _componentsPointers = new Electric*[componentsCount];

    unsigned short int i;
    for(i = 0; i < componentsCount; i++)
        _componentsPointers[i] = nullptr;
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

bool Branch::setElectric(const Electric *e)
{
    unsigned short int i;
    for(i = 0; i < _componentsCount; i++)
        if(_componentsPointers[i] == NULL)
        {
            _componentsPointers[i] = e;
            return true;
        }
    
    return false;
}

bool Branch::setElectric(const Electric *e, const unsigned short int &offset)
{
    unsigned short int i;
    for(i = 0; i < _componentsCount; i++)
        if(_componentsPointers[i] == NULL && i == offset)
        {
            _componentsPointers[i] = e;
            return true;
        }
    
    return false;
}