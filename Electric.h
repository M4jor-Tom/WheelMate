#pragma once

class Electric
{
protected:
    const double _maxVoltage, _maxCurrent, _maxPower;
    const short int _controlPort, _negPort, _measurePort;

    double _targetVoltage, _voltageFactor;
    bool _security;
public:
    //CONSTRUCTORS / DESTRUCTORS
    Electric();
    Electric(const short int &controlPort, const short int &negPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower);
    Electric(const Electric &e);
    ~Electric();

    //SETTERS
    void setSecurity(const bool &status);

    //GETTERS
    bool getSecurity() const;

    //MEASURERS
    virtual double measureVoltage() const;


    //CONSTANTS
    static const short int
        UNSET = -1,
        MASS = 0,
        VOLTAGE = 1,
        POWER = 2;
};