#pragma once
#include "Vehicle.h"


class Boat :
    public Vehicle
{public:
    using Vehicle::Vehicle;
    virtual void travel(Position destination);
};

