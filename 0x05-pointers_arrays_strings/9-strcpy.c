#include "main.h"

/**
 * _strcpy - Copies the string to a pointer
 * @dest: the pointer string is copied to
 * @src: the string to be copied
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
