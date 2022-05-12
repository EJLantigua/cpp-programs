#pragma once
#include "MyDate.h"
#include <iostream>
#include <string>

using namespace std;

class Person 
{
private:
	string pName;
	MyDate birthDate;
	string phoneNum;
	string emailAdd;

public:
	Person(string name = "", MyDate bday = (0, 0, 0), string pn = "", string ea = "") : pName(name), birthDate(bday), phoneNum(pn), emailAdd(ea) {}
	~Person();

	virtual void setPName();
	virtual string getPName();
	virtual void printPName();

	virtual void setBirthDate();
	virtual MyDate getBirthDate();
	virtual void printBirthDate();

	virtual void setPhoneNumber();
	virtual string getPhoneNumber();
	virtual void printPhoneNumber();

	virtual void setEmailAddress();
	virtual string getEmailAddress();
	virtual void printEmailAddress();

	virtual void inputData()=0;
	virtual void printData()=0;
};

