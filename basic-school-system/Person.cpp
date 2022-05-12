#include "Person.h"

Person::~Person()
{
}

void Person::setPName()
{
	string *temp1 = new string;
	string *temp2 = new string;
	cout << "What is your first name: ";
	cin >> *temp1;
	cout << "What is yor last name: ";
	cin >> *temp2;
	*temp1 += " " + *temp2;
	pName = *temp1;

	delete temp1;
	delete temp2;
}

string Person::getPName()
{
	return this->pName = pName;
}

void Person::printPName()
{
	cout << "Student Name: " << Person::getPName() << endl;
}

void Person::setBirthDate()
{
	cout << "Please enter the following information of Date of Birth---" << endl;
	birthDate.inputData();
}

MyDate Person::getBirthDate()
{
	return MyDate(birthDate);
}

void Person::printBirthDate()
{
	cout << "DOB: " << Person::getBirthDate() << endl;
}

void Person::setPhoneNumber()
{
	string *temp = new string;

	cout << "What is your best phone number to contact you with?---" << endl;
	cin >> *temp;
	this->phoneNum = *temp;

	delete temp;
}

string Person::getPhoneNumber()
{
	return this->phoneNum;
}

void Person::printPhoneNumber()
{
	cout << "Phone Number: " << Person::getPhoneNumber() << endl;
}

void Person::setEmailAddress()
{
	string *temp = new string;

	cout << "What is your email address?" << endl;
	cin >> *temp;

	this->emailAdd = *temp;

	delete temp;
}

string Person::getEmailAddress()
{
	return this->emailAdd;
}

void Person::printEmailAddress()
{
	cout << "Student's email: " << Person::getEmailAddress() << endl;
}

void Person::inputData()
{
	Person::setPName();
	Person::setBirthDate();
	Person::setPhoneNumber();
	Person::setEmailAddress();
}

void Person::printData()
{
	Person::printPName();
	Person::printBirthDate();
	Person::printPhoneNumber();
	Person::printEmailAddress();
}
