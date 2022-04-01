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
	int k, h;
	char c;

	k = 0;
	while (c != '\0')
	{
		c = *(src + k);
		h = k++;
	}
	for (i = 0; i < h && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < h; i++)
		dest[i] = '\0';

	return (dest);
}
