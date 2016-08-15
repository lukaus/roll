#include <iostream>/* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>

using namespace std;


class Dice
{
	double num;	


public:
	static double roll(int size)
	{
		return rand() % size + 1;
	}
};
