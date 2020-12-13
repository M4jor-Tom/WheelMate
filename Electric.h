class Electric
{
protected:
    const float _maxVoltage, _maxCurrent, _maxPower;
    const unsigned short int _port;
public:
    Electric(const unsigned short int port, const float &maxVoltage, const float &maxCurrent, const float &maxPower);
    Electric(const Electric &e);
    ~Electric();
};