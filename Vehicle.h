#pragma once

#include "Position.h"

class Vehicle
{ private: 
	double speed;
	int numPassengers;
	int maxPassengers;
	Position position;
public:
	Vehicle();
	Vehicle(double speed, Position position, int numPass, int maxPass);
	double getEta(Position destination);
	double getSpeed();
	Position getPosition() { return position; }
	int getNumPassengers();
	int getMaxPassengers();
	void setSpeed(double spd);
	void setNumPass(int numPass);
	void setMaxPass(int maxPass);
	virtual void travel(Position destination) = 0;
};

