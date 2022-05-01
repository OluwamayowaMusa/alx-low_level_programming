#include "main.h"
#include <stdio.h>

/**
 * _pow - Exponent Operation
 * @base: Base
 * @exp: Exponent
 *
 * Return: Base raised to exponent
 */
unsigned long int _pow(unsigned long int base, unsigned int exp)
{
	unsigned long int result = 1;
	unsigned int i = 0;

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
 * set_bit - Sets the value of a bit to 1 at given index
 * @n: Poniter to number passed
 * @index: Index of number
 *
 * Return: 1 - if it worked
 *        -1 - if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int control;

	if (index > 63)
		return (-1);
	control = _pow(2, index);
	*n = control | *n;
	return (1);
}


/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	set_bit(&n, 5);
	printf("%lu\n", n);
	n = 0;
	set_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	set_bit(&n, 0);
	printf("%lu\n", n);
	return (0);
}
