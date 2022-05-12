/*
Emijoel Lantigua
Machine Problem 4
Inheritance- Point, Circle, Cylinder Input
*/
#include "PointType.h"
#include "CircleType.h"
#include "cylinderType.h"

int main()
{
	// Initialize objects for each class
	PointType Coord1;
	CircleType Cir1;
	CylinderType Cyl1;
	
	// Have user input x and y coordinate values
	cout << "Please enter your x-coordinate and y-coordinate values\n";
	cin >> Coord1;
	Coord1.printXCoord();
	Coord1.printYCoord();
	cout << Coord1 << endl;

	// Values for the circle object are inherited by the point object
	Cir1.setCenterPt(Coord1);
	Cir1.printCenterPt();
	Cir1.setRadius();
	Cir1.printRadius();
	Cir1.circleArea();
	Cir1.circleCircumference();

	// Values for the cylinder object are inherited by the circle & point objects
	Cyl1.setBase(Cir1);
	Cyl1.getBase();
	Cyl1.setHeight();
	Cyl1.printHeight();
	Cyl1.printBase();
	Cyl1.printVolume();
	Cyl1.printSurfaceArea();

	system("pause");
}