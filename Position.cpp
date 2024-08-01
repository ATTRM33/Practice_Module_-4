#include "Position.h"
#include <cmath>
#include <ostream>
#include <iomanip>


Position::Position() : Position(0,0) {

}
Position::Position(double xCoord, double yCoord) :
x(xCoord), y(yCoord) {

}

double Position::calcDistance(Position start, Position end) {
	return sqrt(pow(start.getX() - end.getX(), 2) + 
		pow(start.getY() - end.getY(), 2));
	
}

std::ostream& operator <<(std::ostream& strm, Position pos) {
	strm << "X: " << std::fixed <<
		std::setprecision(3)
		<< pos.getX()
		<< ", Y: " << pos.getY();
	return strm;
}