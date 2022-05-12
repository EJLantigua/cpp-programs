#include "Faculty.h"
#include <vector>

void Faculty::setOfficeRoom()
{
	string *temp0 = new string;
	int *temp1 = new int;

	cout << "Enter your office's building location---" << endl;
	cin >> *temp0;
	cout << "Enter your office room number---" << endl;
	cin >> *temp1;

	officeRoom += *temp0 + to_string(*temp1);

	delete temp1;
}

string Faculty::getOfficeRoom()
{
	return this->officeRoom = officeRoom;
}

void Faculty::printOfficeRoom()
{
	cout << "Office Room #: " << Faculty::getOfficeRoom() << endl;
}

void Faculty::setTenure()
{
	bool *temp = new bool;
	string *ans = new string;
	cout << "Are you a tenure?(Y or N)---" << endl;
	cin >> *ans;

	if (*ans == "Y" || *ans == "y")
		*temp = true;
	else
		*temp = false;

	tenure = *temp;

	delete temp;
	delete ans;
}

bool Faculty::getTenure()
{
	return this->tenure = tenure;
}

void Faculty::printTenure()
{
	if (tenure == true)
		cout << "Tenure: Yes" << endl;
	else
		cout << "Tenure: No" << endl;
}

void fillVector(vector<MyDate>& fvec)
{
	MyDate *tempClass = new MyDate("","","");
	int *temp = new int;

	cout << "Enter the amount of times a week you will have Office Hours below ---" << endl;
	cin >> *temp;

	for (int i = 0; i < *temp * 2; i++)
	{
		tempClass->timeData();
		fvec.push_back(*tempClass);
		cout << endl;
	}

	delete temp;
	delete tempClass;
}

void Faculty::setOfficeHours()
{
	fillVector(*officeHours);
}

vector<MyDate> Faculty::getOfficeHours()
{
	return vector<MyDate>(*officeHours);
}

void printVector(vector<MyDate>& pvec)
{
	unsigned int size = pvec.size();
	cout << "Office Hours: ";

	for (unsigned int i = 0; i < size; i++)
	{
		pvec[i].printTime();
		cout << endl;
	}
}

void Faculty::printOfficeHours()
{
	Faculty::getOfficeHours();
}

void Faculty::inputData()
{
	Employee::inputData();
	Faculty::setOfficeRoom();
	Faculty::setTenure();
}

void Faculty::printData()
{
	Employee::printData();
	Faculty::printOfficeRoom();
	Faculty::printTenure();
}
