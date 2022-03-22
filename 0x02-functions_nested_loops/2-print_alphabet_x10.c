#include "main.h"

/**
 * print_alphabet_x10 - Entry point, no arguments
 * Print the lower case letters 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	j = 97;
	while (i < 10)
	{
		while (j < 123)
		{
			_putchar(j);
			j++;
			_putchar(10);
		}
		i++;
		j = 97;
	}
}
