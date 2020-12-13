#include "Electric.h"

Electric::Electric(const unsigned short int port, const float &maxVoltage, const float &maxCurrent, const float &maxPower):
    _port(port),
    _maxVoltage(maxVoltage),
    _maxCurrent(maxCurrent),
    _maxPower(maxPower)
{

}

Electric::Electric(const Electric &e):
    _port(e._port),
    _maxVoltage(e._maxVoltage),
    _maxCurrent(e._maxCurrent),
    _maxPower(e._maxPower)
{

}

Electric::~Electric()
{

}