#include "main.h"

/**
 * print_number - Print an integer
 * @n: Number to be printed
 */
void print_number(int n)
{
	if (n > -1 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n > 9 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 99 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 999 && n < 10000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
