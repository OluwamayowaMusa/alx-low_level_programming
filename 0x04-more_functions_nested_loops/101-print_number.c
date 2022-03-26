#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Number to be printed
 */
void print_number(int n)
{
	unsigned int i = n;

	if (i < 0)
	{
		_putchar(45);
		i = -i;
	}
	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
