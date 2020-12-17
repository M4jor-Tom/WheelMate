#pragma once

typedef unsigned short int usi;
typedef const unsigned short int cusi;

typedef short int si;
typedef const short int csi;

class Electric
{
protected:
    const double _maxVoltage, _maxCurrent, _maxPower;
    csi _controlPort, _negPort, _measurePort, _negMeasurePort;

    double _targetVoltage, _voltageFactor;
    bool _security;
public:
    //CONSTRUCTORS / DESTRUCTORS
    Electric();
    Electric(csi &controlPort, csi &negPort, csi &measurePort, csi &negMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower);
    Electric(const Electric &e);
    ~Electric();

    //SETTERS
    void setSecurity(const bool &status);
    virtual bool setPower(const double &targetPower);
    virtual bool setVoltage(const double &targetVoltage);

    //GETTERS
    bool getSecurity() const;
    si getPort(csi &port) const;

    //MEASURERS
    virtual double measureVoltage() const;


    //CONSTANTS
    static csi
        ERROR = -2,
        UNSET = -1,
        MASS = 0,
        VOLTAGE = 1,
        POWER = 2,
        PPORT = 3,
        NPORT = 4,
        PMPORT = 5,
        NMPORT = 6;
};