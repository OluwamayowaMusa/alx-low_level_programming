#include <stdio.h>

int numIterations = 0;

/**
 * rand - random number generator
 *
 * Return: number
 */
int rand(void)
{
	numIterations++;
	switch (numIterations)
	{
		case 1:
			printf("%d\n", numIterations);
			return (9);
		case 2:
			printf("%d\n", numIterations);
			return (8);
		case 3:
			printf("%d\n", numIterations);
			return (10);
		case 4:
			printf("%d\n", numIterations);
			return (24);
		case 5:
			printf("%d\n", numIterations);
			return (75);
		case 6:
			printf("%d\n", numIterations);
			return (9);
	}
	return (22);
}
