#include "main.h"

/**
 * _strcpy - Copies the string to a pointer
 * @dest: the pointer string is copied to
 * @src: the string to be copied
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
