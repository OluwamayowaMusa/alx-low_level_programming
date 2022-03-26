#include "main.h"

/**
 * power - Returns the the result of base to the power of expoonet
 * @base: Base
 * @exp: Exponent
 * Return: The result
 */
int power(int base, int exp)
{
	int i, result;

	i = 0;
	result = 1;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}

/**
 * print_number - Prints an integer
 * @n: Number to be printed
 */
void print_number(int n)
{
	int j, k, l, m;

	k = 0;
	if (n > -1)
	{
		j = n;
		while (j > 9)
		{
			j /= 10;
			k++;
		}
		l = power(10, k);
		_putchar((n / l) + '0');
		while (k > 1)
		{
			l = power(10, k);
			m = power(10, (k - 1));
			_putchar(((n % l) / m) + '0');
			k--;
		}
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(45);
		n = n * -1;
		j = n;
		while (j > 9)
		{
			j /= 10;
			k++;
		}
		l = power(10, k);
		while (k > 1)
		{
			l = power(10, k);
			m = power(10, (k - 1));
			_putchar(((n % l) / m) + '0');
			k--;
		}
		_putchar((n % 10) + '0');
	}
}
