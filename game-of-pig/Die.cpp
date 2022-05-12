#include "Die.h"

Die::Die()
{
	face = 1;
	srand(time(0));  
}

Die::~Die()
{

}

void Die::roll()
{
	face = rand() % 6 + 1;
}

int Die::getFace()
{
	return face;
}
