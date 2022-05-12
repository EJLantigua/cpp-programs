#include "CircleType.h"

class CylinderType : public CircleType
{
private:
	double height;
	double base;
	PointType Center;
public:
	CylinderType(int x = 0, int y = 0, double b = 0.0, double h = 0.0) : Center(x, y), base(b), height(h) {}
	// Getting Height Value
	void setHeight();
	double getHeight();
	void printHeight();
	// Getting Base Value
	void setBase(CircleType circle);
	double getBase();
	void printBase();
	// Getting Center Value
	PointType getCenter();
	void printCenter();
	// Volume of cylinder
	double calcVolume();
	void printVolume();
	//Surface Area of cylinder
	double calcSurfaceArea();
	void printSurfaceArea();

};