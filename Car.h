
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
class Car :
    public Vehicle
{public:
    using Vehicle::Vehicle;
    virtual void travel(Position destination);
    
};

#endif // !CAR_H