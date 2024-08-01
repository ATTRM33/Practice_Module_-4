#include "Position.h"
#include "Vehicle.h"
#include "Car.h"

#include <iostream>
#include <ostream>

 void Car::travel(Position destination) {

	 double distance = Position::calcDistance(getPosition(), destination);
	 std::cout << "This car drives " << Vehicle::getPosition() << " miles to " << destination << " over land.The trip takes " << getEta(destination) << "hours." << std::endl;
}

 