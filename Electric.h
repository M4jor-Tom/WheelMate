#pragma once

class Electric
{
protected:
    const double _maxVoltage, _maxCurrent, _maxPower;
    const short int _controlPort, _measurePort;

    double _targetVoltage;
    bool _security;
public:
    //CONSTRUCTORS / DESTRUCTORS
    Electric(const short int &controlPort, const short int &measurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower);
    Electric(const Electric &e);
    ~Electric();

    //SETTERS
    bool setVoltage(const double &targetVoltage);
    virtual bool setPower(const double &targetPower) = 0;

    void setSecurity(const bool &status);

    //GETTERS
    bool getSecurity() const;
    virtual double getCurrent() const = 0;

    //MEASURERS
    double measureVoltage() const;


    //CONSTANTS
    static const short int
        UNSET = -1,
        VOLTAGE = 0,
        POWER = 1;
};