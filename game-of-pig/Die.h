#pragma once
#include <iostream>
#include <ctime>

using namespace std;

class Die
{
public:
	Die();
	~Die();
private:
	int face;
public:
	void roll();
	int getFace();
};

