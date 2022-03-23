#include <stdio.h>

/**
 * main - Entry point
 * Print the first fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i, j, count, tmp;

	i = j = count = 1;
	while (count < 51)
	{
		printf("%d", j);
		tmp = j;
		j += i;
		i = tmp;
		if (count != 50)
		{
			putchar(44);
			putchar(32);
		}
		count++;
	}
	putchar(10);
	return (0);
}
