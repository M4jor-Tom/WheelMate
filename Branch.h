#include "Electric.h"

class Branch: public Electric
{
private:
    const unsigned short int _componentsCount;
    Electric **_componentsPointers;
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

    bool setElectric(const Electric *e);
    bool setElectric(const Electric *e, const unsigned short int &offset);
};