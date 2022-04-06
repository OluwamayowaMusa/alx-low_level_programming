#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: the address byte is copied to
 * @src: the address byte is copied from
 * @n: number of byte to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (ptr);
}
