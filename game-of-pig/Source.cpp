#include "PIG.h"

void display(double *p)
{
	cout << "The new box has: " << *p << endl;
	cout << "The address of the double is: " << p << endl;
}

int main()
{
	PIG p;
	PIG* gamePtr = nullptr;

	//gamePtr = &p;

	gamePtr = new PIG;

	(*gamePtr).PlayGame();
	gamePtr->PlayGame();

	cout << "The address of p is: " << &p << endl;

	int x, y;
	cout << "The address of x is: " << &x << endl;

	int *ptr;		// pointer to interger
	ptr = &x;		// stores the address of x into ptr

	*ptr = 20;

	cout << "The value of x is: " << x << endl;
	cout << "The value of x is: " << *ptr << endl;
	cout << "The address of x is: " << ptr << endl;

	ptr = &y;

	double *dptr;
	dptr = new double;
	*dptr = 3.4;
	display(dptr);
	//cout << "The new box has: " << *dptr << endl;
	//cout << "The address of the double is: " << dptr << endl;
	delete dptr;

	dptr = new double;
	*dptr = 56.98;
	display(dptr);
	delete dptr;
	//cout << "The new box has: " << *dptr << endl;
	//cout << "The address of the double is: " << dptr << endl;

	dptr = new double[3];
	*(dptr + 0) = 4.5;		//dptr[0]
	*(dptr + 1) = 60.45;		//dptr[1]
	*(dptr + 2) = 99.9;		//dptr[2]
	//display(dptr);

	for (int i = 0; i < 3; i++)
		cout << *(dptr + i) << endl;
	for (int i = 0; i < 3; i++)
		cout << dptr[i] << endl;
	for (int i = 0; i < 3; i++)
		cout << *dptr++ << endl;
	for (int i = 0; i < 3; i++)
		display(--dptr);

	delete[] dptr;
	
}