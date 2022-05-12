#pragma once
#include <iostream>

using namespace std;

// Value of PI
const double PI = 3.14159;

class PointType
{
	// Allows for objects of PointType to be used with as input and output streams to the console
	friend istream& operator>>(istream& is, PointType& C1);
	friend ostream& operator<<(ostream& os, const PointType& C1);
protected:
	// Coordinates for X and Y 
	int x_coordinate;
	int y_coordinate;
public:
	// Set default constructor for X & Y value 
	PointType(int x = 0, int y = 0) : x_coordinate(x), y_coordinate(y) {}
	// Deconstructor
	~PointType();

	// Setters for X & Y coordinates
	void setXCoord(int x);
	void setYCoord(int y);

	// Getter for X & Y coordinates
	int getXCoord();
	int getYCoord();

	// Print statements for X & Y coordinates
	void printXCoord();
	void printYCoord();
	void printCoordPt();

	// Operation Overloading to allow comparisons between PointType variables
	bool operator==(const PointType& C1);
	PointType operator=(const PointType& C1);
	bool operator!=(const PointType& C1);

	// Operation Overloading to allow math operations between PointType variables
	PointType operator+(const PointType& C1);
	PointType operator-(const PointType& C1);
	PointType operator*(int num);
	PointType operator/(int num);
};

