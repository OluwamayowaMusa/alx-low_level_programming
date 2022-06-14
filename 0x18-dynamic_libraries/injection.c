#include <unistd.h>


int numIterations = 0;

/**
 * rand - generate random numbers
 *
 * Return: Number
 */
int rand()
{
	numIterations++;
	switch (numIterations)
	{
		case 1:
			return (9);
		case 2:
			return (8);
		case 3:
			return (10);
		case 4:
			return (24);
		case 5:
			return (75);
		case 6:
			return (9);
	}
	return (22);
}
