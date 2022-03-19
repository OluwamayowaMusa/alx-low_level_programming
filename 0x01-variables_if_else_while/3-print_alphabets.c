#include <stdio.h>

/**
 * main - Entry point
 * Print the alphabets in lower and upper case
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
