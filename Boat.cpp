#include "Position.h"
#include "Boat.h"

#include <iostream>

 void Boat::travel(Position destination) {
	 double distance = Position::calcDistance(getPosition(), destination);
	 std::cout << "This boat travels " << Vehicle::getPosition() << " miles to " << destination << " over water.The trip takes " << getEta(destination) << "hours." << std::endl;
}