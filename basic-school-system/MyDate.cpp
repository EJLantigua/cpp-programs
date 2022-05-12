#include "MyDate.h"
#include <iostream>
#include <string>

using namespace std;

bool MyDate::operator==(const MyDate & mdate)
{
	if (this->month == mdate.month && this->day == mdate.day  && this->year == mdate.year)
		return true;
	return false;
}

bool MyDate::operator<=(const MyDate & mdate)
{
	if (this->month <= mdate.month && this->day <= mdate.day  && this->year <= mdate.year)
		return true;
	return false;
}

void MyDate::setDay()
{
	int *d = new int;
	redo:
	cout << "Enter the day: ";
	cin >> *d;
	switch (MyDate::getMonth())
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (*d <= 0 || *d > 31)
		{
			cout << "Redo---" << endl;
			goto redo;
		} break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (*d <= 0 || *d > 31)
		{
			cout << "Redo---" << endl;
			goto redo;
		} break;
	case 2:
		if (false == MyDate::checkLeapYear(MyDate::getYear()) && (*d <= 0 || *d > 28))
		{
			cout << "Redo---" << endl;
			goto redo; break;
		}
		else if (true == MyDate::checkLeapYear(MyDate::getYear()) && (*d <= 0 || *d > 29))
		{
			cout << "Redo---" << endl;
			goto redo; break;
		}
	}
	day = *d;

	delete d;
}

int MyDate::getDay()
{
	return this->day;
}

void MyDate::printDay()
{
	if (MyDate::getDay() < 10)
		cout << "0" << MyDate::getDay();
	else if (MyDate::getDay() >= 10 && MyDate::getDay() <= 31)
		cout << MyDate::getDay();
}

void MyDate::setMonth()
{
	int *m = new int;
	redo:
	cout << "Enter the month: ";
	cin >> *m;
	if (*m <= 0 || *m > 12)
	{
		cout << "Re-Enter---" << endl;
		goto redo;
	}
	month = *m;

	delete m;
}

int MyDate::getMonth()
{
	return this->month = month;
}

void MyDate::printMonth()
{
	if (this->month < 10)
		cout << "0" << this->month;
	else if (this->month >= 10 && this->month <= 12)
		cout << this->month;
}

void MyDate::setYear()
{
	int *y = new int;
	cout << "Enter the year: ";
	cin >> *y;
	year = *y;

	delete y;
}

int MyDate::getYear()
{
	return this->year = year;
}

void MyDate::printYear()
{
	cout << MyDate::getYear();
}

void MyDate::setWeekDay()
{
	string *temp = new string;
	cout << "Enter the day(s) of the week your available below ---" << endl;
	cin >> *temp;

	this->weekday = *temp;

	delete temp;
}

string MyDate::getWeekDay()
{
	return this->weekday;
}

void MyDate::printWeekDay()
{
	cout << getWeekDay();
}

void MyDate::setTime1()
{
	string *temp = new string;
	redo:
	cout << "At what time?---" << endl;
	cin >> *temp;

	this->time1 = *temp;

	delete temp;

}

string MyDate::getTime1()
{
	return this->time1;
}

void MyDate::printTime1()
{
	cout << "Office Hours From: " << getTime1();
}

void MyDate::setTime2()
{
	string *temp = new string;
redo:
	cout << "To what time?---" << endl;
	cin >> *temp;

	this->time2 = *temp;

	delete temp;
}

string MyDate::getTime2()
{
	return this->time2;
}

void MyDate::printTime2()
{
	cout << "- " << getTime2() << endl;
}

bool MyDate::checkLeapYear(int year)
{
	if (year % 400 == 0)
		return true;
 
	else if (year % 100 == 0)
		return false;

	else if (year % 4 == 0)
		return true;
	else
		return false;
}

void MyDate::dateData()
{
	MyDate::setYear();
	MyDate::setMonth();
	MyDate::setDay();
}

void MyDate::timeData()
{
	MyDate::setWeekDay();
	MyDate::setTime1();
	MyDate::setTime2();
}

void MyDate::printDate()
{
	MyDate::printMonth();
	cout << "/";
	MyDate::printDay();
	cout << "/";
	MyDate::printYear();
	cout << endl;
}

void MyDate::printTime()
{
	MyDate::printWeekDay();
	cout << ": ";
	MyDate::printTime1();
	cout << ":";
	MyDate::getTime2();
	cout << endl;
}

void MyDate::inputData()
{
	string *temp = new string;

	cout << "Are you Entering a Date or Time? (D for date and T for time)---" << endl;
	cin >> *temp;

	if (*temp == "D" || *temp == "d")
		MyDate::dateData();
	if (*temp == "T" || *temp == "t")
		MyDate::timeData();
}

void MyDate::printData()
{
	if (month != 0 && day != 0 && year != year)
		MyDate::printDate();
	if (stoi(time1) != 0 && stoi(time2) != 0)
		MyDate::printTime();
}

ostream& operator<<(ostream& os, const MyDate& date)
{
	os << date.month << date.day << date.year;

	return os;
}
