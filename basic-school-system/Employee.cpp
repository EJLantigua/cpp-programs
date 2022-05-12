#include "Employee.h"

Employee::~Employee()
{
}

void Employee::setSalary()
{
	long double *temp = new long double;

	cout << "Enter your salary below.---" << endl;
	cin >> *temp;

	this->salary = *temp;

	delete temp;
}

long double Employee::getSalary()
{

	return this->salary;
}

void Employee::printSalary()
{
	cout << "Salary: $" << Employee::getSalary() << endl;
}

void Employee::setHireDate()
{
	MyDate *temp = new MyDate(0,0,0);
	cout << "Enter your date of hire below---" << endl;

	temp->setYear();
	temp->setMonth();
	temp->setDay();

	hDate = *temp;

	delete temp;
}

MyDate Employee::getHireDate()
{
	return MyDate(hDate);
}

void Employee::printHireDate()
{
	cout << "Hire Date: " << Employee::getHireDate() << endl;
}

void Employee::setTitle()
{
	string *temp = new string;

	cout << "Enter your position title below---" << endl;
	cin.ignore();
	getline(cin, *temp);

	title = *temp;
}

string Employee::getTitle()
{
	return this->title = title;
}

void Employee::printTitle()
{
	cout << "Title: " << Employee::getTitle() << endl; 
}

void Employee::inputData()
{
	Person::inputData();
	Employee::setSalary();
	Employee::setHireDate();
	Employee::setTitle();
}

void Employee::printData()
{
	Person::printData();
	Employee::printSalary();
	Employee::printHireDate();
	Employee::printTitle();
}
