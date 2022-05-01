#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _pow - Exponent function
 * @base: Base
 * @exp: Exponent
 * Return: base raised to exponent
 */
unsigned long int _pow(unsigned long int base, unsigned long int exp)
{
	unsigned long int result = 1, i = 0;

	if (exp == 0)
		return (result);
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}

/**
 * print_binary - Print binary representation of a number
 * @n: Number passed
 */
void print_binary(unsigned long int n)
{
	unsigned long int control = 0, i = 1;
	unsigned long int temp;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n != ULONG_MAX)
	{
		while (control < n)
		{
			control = _pow(2, i) - 1;
			i++;
		}
		control = (control + 1) >> 1;
	}
	else
	{
		control = _pow(2, 63);
	}
	while (control > 0)
	{
		temp = n & control;
		if (temp == 0)
			putchar('0');
		else
			putchar('1');
		control = control >> 1;
	}
}


/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	print_binary(954372342312);
	printf("\n");
	print_binary(ULONG_MAX);
	printf("\n");
	return (0);
}
