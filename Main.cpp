//Zach Brown
//Date: 8/1/2024
//CS2 Module 4 practice

#include <iostream>
#include "Position.h"
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"

using namespace std;
void testCar();
int main() {
	//testCar();

	Vehicle* vehicles[5];
	Position here(20, 20);
	Position there(40, 60);
	Position overThere(150, 400);
	Position wayOverThere(1456, 2841);
	Position reallyClose(21, 21);
	Position theBestSpot(42, 42);

	vehicles[0] = new Car(50, here, 2, 3);
	vehicles[1] = new Boat(24, there, 4, 12);
	vehicles[2] = new Car(75, overThere, 1, 3);
	vehicles[3] = new Boat(10, wayOverThere, 3, 3);
	vehicles[4] = new Car(20, reallyClose, 2, 3);

	for (Vehicle* v : vehicles) {
		v->travel(theBestSpot);
		std::cout << std::endl;
	}
}
void testCar() {
	Position here(50, 75);
	Position there(100, 250);

	Car myCar(60, there, 4, 4);
	std::cout << myCar.getEta(there);
	myCar.travel(there);
}