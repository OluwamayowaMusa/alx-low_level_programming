#include "main.h"
#include <stdio.h>

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

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Bigg Endian\n");
	}
	return (0);
}
