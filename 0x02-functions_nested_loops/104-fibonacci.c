#include <stdio.h>

/**
 * main - Entry point
 * Print the first fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i, j, tmp;
	int count;

	i = j = count = 1;
	while (count < 99)
	{
		printf("%lu", j);
		tmp = j;
		j += i;
		i = tmp;
		if (count != 99)
		{
			putchar(44);
			putchar(32);
		}
		count++;
	}
	putchar(10);
	return (0);
}
