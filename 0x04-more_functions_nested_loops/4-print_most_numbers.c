#include "main.h"

/**
 * print_most_numbers - Print the numbers 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 52 || i == 50)
			;
		else
			_putchar(i);
		i++;
	}
	_putchar(10);
}
