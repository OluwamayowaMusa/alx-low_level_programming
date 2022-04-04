#include "main.h"

/**
 * add_str - add string
 * @n1: First string
 * @n2: Second string
 * @r: Buffer
 * @size_r: Buffer size
 *
 * Return: pointer to the result
 */
char *add_str(char *n1, char *n2, char *r, int size_r)
{
	int i, j = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		i = (*n1 - '0') + (*n2 - '0');
		i += j;
		*(r + size_r) = (i % 10) + '0';
		j = i / 10;
	}
	for (; *n1; n1--, size_r--)
	{
		i = *(n1 - '0') + j;
		*(r + size_r) = (i % 10) + '0';
		j =  i / 10;
	}
	for (; *n2; n2--, size_r--)
	{
		i = (*n2 - '0') + j;
		*(r + size_r) = (i % 10) + '0';
		j = i / 10;
	}
	if (j && size_r >= 0)
	{
		*(r + size_r) = (j % 10) + '0';
		return (r + size_r);
	}
	else if (j && size_r < 0)
	{
		return (0);
	}
	return (r + size_r + 1);
}

/**
 * infinite_add - Adds two number together
 * @n1: First number as string
 * @n2: Second number as string
 * @r: Buffer
 * @size_r: Buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_1 = 0, len_2 = 0;

	while (*(n1 + len_1) != '\0')
		len_1++;
	while (*(n2 + len_2) != '\0')
		len_2++;
	if (size_r <= len_1 + 1 || size_r <= len_2 + 1)
		return (0);
	n1 += len_1 - 1;
	n2 += len_2 - 1;
	*(r + size_r) = '\0';

	return (add_str(n1, n2, r, --size_r));
}
