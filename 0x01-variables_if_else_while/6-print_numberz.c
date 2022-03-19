#include <stdio.h>

/**
 * main - Entry point
 * Print numbers using the putchar
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}
