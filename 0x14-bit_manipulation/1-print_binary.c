#include "main.h"

/**
 * print_binary - Prints the binary representation of number
 * @n: Number passed
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		if (n & 1 == 0)
			_putchar(0);
		else
			_putchar(1);
		n = n >> 1;
	}

}
