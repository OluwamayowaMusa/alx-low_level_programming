#include "main.h"

/**
 * print_line - Print line n times
 * @n: Number of times to print line
 */
void print_line(int n)
{
	int i = 0;

	if (n < 1)
	{
		_putchar(10);
	}
	else
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
}
