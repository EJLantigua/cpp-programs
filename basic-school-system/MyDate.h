#pragma once
#include <iostream>

using namespace std;

class MyDate
{
	friend ostream& operator<<(ostream& os, const MyDate& date);
private:
	int month;
	int day;
	int year;
	string weekday;
	string time1;
	string time2;

public:
	MyDate(int m = 0, int d = 0, int y = 0) : month(m), day(d), year(y) {}
	MyDate(string dow = "", string h = "", string min = "") : weekday(dow), time1(h), time2(min) {}

	bool operator==(const MyDate& mdate);
	bool operator<=(const MyDate& mdate);

	void setDay();
	int getDay();
	void printDay();

	void setMonth();
	int getMonth();
	void printMonth();

	void setYear();
	int getYear();
	void printYear();

	void setWeekDay();
	string getWeekDay();
	void printWeekDay();

	void setTime1();
	string getTime1();
	void printTime1();

	void setTime2();
	string getTime2();
	void printTime2();

	bool checkLeapYear(int year);

	void dateData();
	void timeData();
	void printDate();
	void printTime();

	void inputData();
	void printData();
};

