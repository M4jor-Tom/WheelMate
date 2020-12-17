#include "Branch.h"
#include "Wheeled.h"

class MeasureBranch: public Branch
{
public:
    MeasureBranch(const LinearComponent *ammeter, const Electric *managed, const bool &linearIsTop);
}