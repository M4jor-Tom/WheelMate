#include "Electric.h"

class Branch: public Electric
{
private:
    Electric **componentsPointers;
public:
    //CONSTRUCTORS
    Branch(const unsigned short int &componentsCount);

    //GETTERS
    double getCurrent() const;

    //MEASURERS
    double measureVoltage() const override;
    
    //SETTERS
    bool setPower(const double &targetPower);
    bool setVoltage(const double &targetVoltage);
};