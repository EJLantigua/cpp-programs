#pragma once
#include "Person.h"

enum class GradeStatus {
	Freshman = 1, Sophmore = 2, Junior = 3, Senior = 4
};

class Student :
	public Person
{
private:
	GradeStatus academicStatus;
	double gpa;
	
public:
	Student(string name = "", MyDate bday = (0,0,0), string pn = "", string em = "",
		GradeStatus as = GradeStatus::Freshman, double gp = 0.0) : academicStatus(as), gpa(gp) {}
	~Student();

	void setGradeLevel();
	GradeStatus getGradeLevel();
	void printGradeLevel();

	void setGPA();
	double getGPA();
	void printGPA();

	void inputData();
	void printData();
};

