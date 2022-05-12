#include "MyDate.h"
#include "Faculty.h"
#include "Staff.h"
#include "Student.h"
#include <vector>
#include <iostream>

void Launch(Person** p, int x);

int main()
{
	Person **pptr = nullptr;
	int x;
	cout << "Enter the amount of times you want to enter data---" << endl;
	cin >> x;

	pptr = new Person*[x];

	Launch(pptr, x);

/*	bDay.inputData();
	bDay.printData();
*/

	/*Faculty f;
	f.inputData();
	f.printData();*/
}

void Launch(Person** p, int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "Are you a student or an employee?(Type S for Student or E for Employee)---" << endl;

		char *step1 = new char;
		cin >> *step1;

		switch (*step1)
		{
		case 'S':
		case 's':
			p[i] = new Student;

			p[i]->inputData();
			p[i]->printData();
			break;
		case 'E':
		case 'e':
			cout << "Are you apart of faculty or staff?(Type F for Faculty or S for Staff)---" << endl;
			cin >> *step1;
			if (*step1 == 'F' || *step1 == 'f')
			{
				p[i] = new Faculty;

				p[i]->inputData();
				p[i]->printData();
			}
			else
			{
				p[i] = new Staff;

				p[i]->inputData();
				p[i]->printData();
			}
		}
	}
}