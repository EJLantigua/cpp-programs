#include "cylinderType.h"

// Set value of the height
void CylinderType::setHeight()
{
	// Create pointer of double type
	double *h = new double;
	// User enter a value for pointer
	cout << "Enter the Height for Cylinder: ";
	cin >> *h;
	cout << endl;
	// Assign the value to the double variable instance of the CylinderType class
	this->height = *h;
	// Delete the pointer from memory
	delete h;
}

// Get height value
double CylinderType::getHeight()
{
	return this->height;
}

// Print height value
void CylinderType::printHeight()
{
	cout << "Height: " << this->getHeight() << endl << endl;
}

// Store values of CircleType object into instances of CylinderType class
void CylinderType::setBase(CircleType circle)
{
	this->Center = circle.getCenterPt();
	this->base = circle.getRadius();
}

// Get the ceter point values
PointType CylinderType::getCenter()
{
	return CircleType::getCenterPt();
}

// Print the center point 
void CylinderType::printCenter()
{
	this->printCenterPt();
}

// Get the radius value
double CylinderType::getBase()
{
	return this->base;
}

// Print the radius value
void CylinderType::printBase()
{
	cout << "Your Base Info---" << endl;
	cout << "Center: " << this->getCenter();
	cout << "Radius: " << this->getBase() << endl;
	cout << "Your Height Information---" << endl;
	CylinderType::printHeight();
}

// Calculate the volume
double CylinderType::calcVolume()
{
	double v = (PI * pow(this->getBase(), 2) * this->getHeight());
	return v;
}

// Print the volume value 
void CylinderType::printVolume()
{
	cout << "Volume of Cylinder is: " << CylinderType::calcVolume() << endl;
}

// Calculate the surface area 
double CylinderType::calcSurfaceArea()
{
	double sa = (2 * PI * CylinderType::getBase() * CylinderType::getHeight()) + (2 * PI * pow(CylinderType::getBase(), 2));
	return sa;
}

// Print the surface area value
void CylinderType::printSurfaceArea()
{
	cout << "Surface Area of Cylinder is: " << CylinderType::calcSurfaceArea() << endl;
}
