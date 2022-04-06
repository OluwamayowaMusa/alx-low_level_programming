#include "main.h"

/**
 * _memset - Fills the memory with a conatsnt byte
 * @s: the address of the memory area
 * @b: constant byte
 * @n: Number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **ptr;
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr = &s;
		**ptr = b;
	}

	return (p);
}
