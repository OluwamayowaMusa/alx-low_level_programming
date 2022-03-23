#include <stdio.h>

/**
 * main - Entry point
 * sum of the even valued fibonacci numbers
 * Return: 0
 */
int main(void)
{
	 unsigned long int i, j, tmp, sum;

	i = j = 1;
	sum = 0;
	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		tmp = j;
		j += i;
		i = tmp;
	}
	printf("%lu\n", sum);
	return (0);
}
