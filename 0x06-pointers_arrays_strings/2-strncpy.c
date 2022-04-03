#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: String copied to
 * @src: String copied from
 * @n: Number of bytes from src to be copied to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *str = dest, *tmp;
	int i;

	tmp = &dest;
	for (i = 0; i < n; i++)
		*(tmp + i) = src[i];

	return (str);
}
