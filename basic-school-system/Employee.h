#pragma once
#include "Person.h"
class Employee :
	public Person
{
private:
	long double salary;
	MyDate hDate;
	string title;

public:
	Employee(string p1 = "", MyDate bd = (0, 0, 0), string pn = "", string em = "", long double sal = 0.0,
		MyDate hde = (0,0,0), string te = "") : salary(sal), hDate(hde), title(te) {}
	~Employee();

	virtual void setSalary();
	virtual long double getSalary();
	virtual void printSalary();

	virtual void setHireDate();
	virtual MyDate getHireDate();
	virtual void printHireDate();

	virtual void setTitle();
	virtual string getTitle();
	virtual void printTitle();

	virtual void inputData()=0;
	virtual void printData()=0;
};

