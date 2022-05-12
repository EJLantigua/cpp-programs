#include "CircleType.h"
#include <cmath>

// Copying values from PointType object into the PointType object Center in CircleType
void CircleType::setCenterPt(PointType cen)
{
	cout << "The Center Coordinates are: " << endl;
	this->Center = cen;
}

// Getter for Center object
PointType CircleType::getCenterPt()
{
	return this->Center;
}

//Printing circle center point
void CircleType::printCenterPt()
{
	cout << CircleType::getCenterPt();
}

// Setting CircleType radius
void CircleType::setRadius()
{
	// Creating a pointer of double variable
	double *rad = new double;

	// Have user enter a value for radius 
	cout << "Enter a Radius:" << endl;
	cin >> *rad;
	cout << endl;
	// Store user's radius value in radius variable of CircleType
	this->radius = *rad;
	// Delete pointer 
	delete rad;
}

// Get radius of CircleType
double CircleType::getRadius()
{
	return this->radius;
}

// Print Radius
void CircleType::printRadius()
{
	cout << "The Radius is: " << CircleType::getRadius() << endl << endl;
}

void CircleType::calcArea()
{
	cout << "The Area is: ";
}

// Calculating the Area of a Circle
void CircleType::circleArea()
{
	CircleType::calcArea();
	double area = (PI *(pow(radius, 2)));
	cout << area << endl << endl;
}

void CircleType::calcCircumference()
{
	cout << "The Circumference is: ";
}

// Calculating the circumference of a circle
void CircleType::circleCircumference()
{
	CircleType::calcCircumference();
	double circumference = (2 * PI * radius);
	cout << circumference << endl << endl;
}
