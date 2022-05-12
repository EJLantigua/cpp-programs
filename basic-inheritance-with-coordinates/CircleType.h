#pragma once
#include "PointType.h"

class CircleType : public PointType
{
protected:
	double radius;
	PointType Center;
public:
	CircleType(int x = 0, int y = 0, double r = 0.0) : Center(x, y), radius(r) {}

	// Get center point
	void setCenterPt(PointType cen);
	PointType getCenterPt();
	void printCenterPt();
	// Get a radius
	void setRadius();
	double getRadius();
	void printRadius();
	// Calculate & print area and circumference
	void calcArea();
	void circleArea();
	void calcCircumference();
	void circleCircumference();
};