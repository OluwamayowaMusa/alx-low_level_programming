#include "main.h"
#include <stdio.h>


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
	temp = n > m ? n : m;
	while (control < temp)
	{
		control = (1 << i) - 1;
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		temp = n & (1 << i);
		control = m & (1 << i);
		if (temp != control)
			num++;
	}
	return (num);
}
