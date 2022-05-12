#pragma once
#include "Employee.h"
#include <vector>

class Faculty :
	public Employee
{
private:
	long double salary;
	MyDate hireDate;
	string title;
	string officeRoom;
	bool tenure;
	vector<MyDate> *officeHours;

public:
	Faculty (string p1 = "", MyDate bd = (0,0,0), string pn = "", string em = "", long double sal = 0.0, 
		MyDate hd=(0,0,0), string te = "", string of = "", bool ten = false, vector<MyDate> *tvec = (new vector<MyDate>)) : salary(sal), hireDate(hd), title(te), officeRoom(of),
		tenure(ten), officeHours(tvec) {}

	void setOfficeRoom();
	string getOfficeRoom();
	void printOfficeRoom();

	void setTenure();
	bool getTenure();
	void printTenure();

	void setOfficeHours();
	vector<MyDate> getOfficeHours();
	void printOfficeHours();

	void inputData();
	void printData();
};

