#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: Number passed
 * @index: Index
 *
 * Return: 1 - if worked
 *        -1 - if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > 63)
		return (-1);
	temp = *n & (1 << index);
	if (temp == 0)
		return (1);
	*n = *n - (1 << index);
	return (1);
}
