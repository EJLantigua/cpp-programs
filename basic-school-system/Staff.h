#pragma once
#include "Employee.h"
class Staff :
	public Employee
{
public:
	Staff (string p1 = "", MyDate bd = (0, 0, 0), string pn = "", string em = "", long sal = 0.0, MyDate hd = (0, 0, 0), string te = "") {}
	~Staff();

	void inputData();
	void printData();
};

