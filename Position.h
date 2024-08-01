#pragma once
#include <iomanip>
class Position
{private:
	double x;
	double y;
public:
	Position();
	Position(double xCoord, double yCoord);
	double getX() { return x; }
	double getY() {return y;}
	void setX(double xCoord) { x = xCoord; }
	void setY(double yCoord) { y = yCoord; }
	static double calcDistance(Position start, Position end);
	friend std::ostream& operator <<(std::ostream& strm, Position pos);
};

