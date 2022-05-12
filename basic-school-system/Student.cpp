#include "Student.h"

Student::~Student()
{
}

void Student::setGradeLevel()
{
	GradeStatus *temp = new GradeStatus;
	int *user = new int;

	cout << "Enter the Student's grade year Grade Status (1, 2, 3, or 4)?---" << endl;
	cin >> *user;
	switch (*user)
	{
	case 1:
		*temp = GradeStatus::Freshman;
		break;
	case 2:
		*temp = GradeStatus::Sophmore;
		break;
	case 3:
		*temp = GradeStatus::Junior;
		break;
	case 4:
		*temp = GradeStatus::Senior;
		break;

	}
	this->academicStatus = *temp;
	
	delete user;
	delete temp;
}

GradeStatus Student::getGradeLevel()
{
	return this->academicStatus;
}

void Student::printGradeLevel()
{
	cout << "Grade Status: Year " << static_cast<int>(Student::getGradeLevel()) << endl;
}

void Student::setGPA()
{
	double *temp = new double;

	cout << "What is your GPA?---" << endl;
	cin >> *temp;

	this->gpa = *temp;

	delete temp;
}

double Student::getGPA()
{
	return this->gpa;
}

void Student::printGPA()
{
	cout << "GPA: " << Student::getGPA() << endl;
}

void Student::inputData()
{
	Person::inputData();
	Student::setGradeLevel();
	Student::setGPA();
}

void Student::printData()
{
	Person::printData();
	Student::printGradeLevel();
	Student::printGPA();
}
