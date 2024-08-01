#include "Vehicle.h"


Vehicle::Vehicle() : Vehicle(0, {0,0}, 0, 0) {

}
Vehicle::Vehicle(double speed, Position position, int numPass, int maxPass) :
speed(speed), position(position.getX(), position.getY()), numPassengers(numPass), maxPassengers(maxPass) {

}
double Vehicle::getEta(Position destination) {
	double distance = Position::calcDistance(position, destination);
	double eta = distance / speed;
	return eta;
}
double Vehicle::getSpeed() {
	return speed;
}
int Vehicle::getNumPassengers() {
	return numPassengers;
}
int Vehicle::getMaxPassengers() {
	return maxPassengers;
}
void Vehicle::setSpeed(double spd) {
	speed = spd;
}
void Vehicle::setNumPass(int numPass) {
	numPassengers = numPass;
}
void Vehicle::setMaxPass(int maxPass) {
	maxPassengers = maxPass;
}
void Vehicle::travel(Position destination) {

 }