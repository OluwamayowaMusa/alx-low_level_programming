#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _pow - Exponent function
 * @base: Base
 * @exp: Exponent
 *
 * Return: base raised to exponent
 */
unsigned long int _pow(unsigned long int base, int exp)
{
	unsigned long int result = 1;
	int i = 0;

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
 * flip_bits - Number of bits you would need to filp to get
 *             from one number to another
 * @n: First number passed
 * @m: Second number passed
 *
 * Return: Number of bits filped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp, control = 0;
	unsigned int num = 0;
	int i = 0;

	if (n == m)
		return (0);
	if (n != ULONG_MAX && m != ULONG_MAX)
	{
		temp = n > m ? n : m;
		while (control < temp)
		{
			control = (1 << i) - 1;
			i++;
		}
		i--;
	}
	else
	{
		i = 63;
	}
	for (; i >= 0; i--)
	{
		temp = n & (_pow(2, i));
		control = m & (_pow(2, i));
		if (temp != control)
		{
			num++;
		}
	}
	return (num);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);
	n = flip_bits(402, 98);
	printf("%u\n", n);
	n = flip_bits(1024, 3);
	printf("%u\n", n);
	n = flip_bits(1024, 1025);
	printf("%u\n", n);
	n = flip_bits(ULONG_MAX, 0);
	printf("%u\n", n);
	n = flip_bits(ULONG_MAX, ULONG_MAX - 1);
	printf("%u\n", n);
	return (0);
}
