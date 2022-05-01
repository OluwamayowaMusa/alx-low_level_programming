#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 - if little endian
 *         0 - if big endian
 */
int get_endianness(void)
{
	char *c;
	int i = 1;

	c = (char *)&i;
	if (*c)
	{
		return (1);
	}
	return (0);
}
