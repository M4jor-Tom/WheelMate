#include "Motor.h"

class Wheeled: public Motor
{
private:
    const float _wheelRadius;
public:
    Wheeled(const unsigned short int port, const float &maxVoltage, const float &maxCurrent, const float &maxPower, const float &wheelRadius);
    Wheeled(const unsigned short int port, const float &maxVoltage, const float &maxCurrent, const float &maxPower, const float &wheelRadius, const float &proportionnal, const float &integral, const float &derivate);
    Wheeled(const Wheeled& w);
    ~Wheeled();
};