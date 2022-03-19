#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Determine if the last number is greater than 5,
 * less than 6 and not 0 or is zero
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		i = n % 10;
		if (i > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, i);
		}
		else if ((i < 6) && (i != 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
		}
		else if (i == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, i);
		}
	}
	else if (n < 0)
	{
		i = n % 10;
		if ((i < 6) && (i != 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
		}
	}
	return (0);
}
