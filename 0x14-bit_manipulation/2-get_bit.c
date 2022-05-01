#include "main.h"

/**
 * _pow - Exponent operation
 * @base: Base
 * @exp: Exponent
 *
 * Return: base raised to exponent
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
 * get_bit - Value of bit at a given index
 * @n: binary number passed
 * @index: Index of bit
 *
 * Return: value of bit at index
 *        - -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int control, temp;

	control = _pow(2, index);
	temp = n & control;
	if (temp == 0)
		return (0);
	else
		return (1);
}
