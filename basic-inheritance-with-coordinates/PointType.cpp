#include "PointType.h"

// Deconstructor
PointType::~PointType()
{
}

// Setter X-value
void PointType::setXCoord(int x)
{
	this->x_coordinate = x;
}

// Setter Y-value
void PointType::setYCoord(int y)
{
	this->y_coordinate = y;
}

// Getter X-value
int PointType::getXCoord()
{
	return this->x_coordinate;
}

// Getter Y-value
int PointType::getYCoord()
{
	return this->y_coordinate;
}

// Overload equal operation between 2 PointType objects
bool PointType::operator==(const PointType& C1)
{
	if ((this->x_coordinate == C1.x_coordinate) && (this->y_coordinate == C1.y_coordinate))
		return true;
}

// Overload assign operation between 2 PointType objects
PointType PointType::operator=(const PointType& C1)
{
	this->x_coordinate = C1.x_coordinate;
	this->y_coordinate = C1.y_coordinate;
	return PointType(this->x_coordinate, this->y_coordinate);
}

// Overload not equal operation between 2 PointType objects
bool PointType::operator!=(const PointType& C1)
{
	if ((this->x_coordinate != C1.x_coordinate) && (this->y_coordinate != C1.y_coordinate))
		return true;
}

// Overload addition operation between 2 PointType objects
PointType PointType::operator+(const PointType& C1)
{
	return PointType(this->x_coordinate + C1.x_coordinate, this->y_coordinate + C1.y_coordinate);
}

// Overload subtraction operation between 2 PointType objects
PointType PointType::operator-(const PointType& C1)
{
	return PointType(this->x_coordinate - C1.x_coordinate, this->y_coordinate - C1.y_coordinate);
}

// Overload multiplication operation between 1 PointType object and an integer
PointType PointType::operator*(int num)
{
	return PointType(this->x_coordinate * num, this->y_coordinate * num);
}

// Overload division operation between 1 PointType object and an integer
PointType PointType::operator/(int num)
{
	return PointType(this->x_coordinate / num, this->y_coordinate / num);
}

// Printing X-value 
void PointType::printXCoord()
{
	cout << "X Coordinate is: " << PointType::getXCoord() << endl;
}

// Printing Y-value 
void PointType::printYCoord()
{
	cout << "Y Coordinate is: " << PointType::getYCoord() << endl;
}

// Printing X-value & Y-valu of a PointType object
void PointType::printCoordPt()
{
	cout << "(" << PointType::getXCoord() << ", " << PointType::getYCoord() << ")" << endl;
}

// Overloading operation that allows to use cin stream with PointType objects 
istream& operator>>(istream& is, PointType & C1)
{
	cout << "Enter your x coordinate here: ";
	is >> C1.x_coordinate;
	cout << "Enter your y coordinate here: ";
	is >> C1.y_coordinate;
	
	return is;
}

// Overloading operation that allows to use cout stream with PointType objects 
ostream& operator<<(ostream& os, const PointType & C1)
{
	os << "(" << C1.x_coordinate << ", " << C1.y_coordinate << ")" << endl;

	return os;
}
