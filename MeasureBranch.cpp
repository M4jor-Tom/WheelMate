#include "MeasureBranch.h"

MeasureBranch::MeasureBranch(const LinearComponent *ammeter, const Electric *managed, const bool &linearIsTop):
    Branch(2)
{
    setElectric(
        ammeter,
        linearIsTop
            ? 0
            : 1 
    );
    
    setElectric(
        managed,
        linearIsTop
            ? 1
            : 0 
    );
}