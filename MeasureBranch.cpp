#include "MeasureBranch.h"

MeasureBranch::MeasureBranch(cusi &linearPort, cusi &linearMeasurePort, const double &maxVoltage, const double &maxCurrent, const double &maxPower, const double &resistance, Electric *managed, const bool &ammeterIsTop):
    Branch(2),
    _ammeterIsTop(ammeterIsTop)
{
    bool good = true;
    
    //Construct LinearComponent (ammeter)
    if(ammeterIsTop)
        good = good && setElectric(
            new LinearComponent(linearPort, managed->getPort(PPORT), linearMeasurePort, managed->getPort(PMPORT), maxVoltage, maxCurrent, maxPower, resistance),
            0
        );
    else
        good = good && setElectric(
            new LinearComponent(managed->getPort(NPORT), linearPort, managed->getPort(NMPORT), linearMeasurePort, maxVoltage, maxCurrent, maxPower, resistance),
            1 
        );
    
    //Construct Electric component (measured)
    good = good && setElectric(
        managed,
        ammeterIsTop
            ? 1
            : 0 
    );

    //Block device if error occures
    while(!good);
}