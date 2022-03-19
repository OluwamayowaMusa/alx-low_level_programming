#include <stdio.h>

/**
 * main - Entry Point
 * Print alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	int i = 122;

	while (i > 98)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
