#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: string scanned
 * @accept: string with mathching chararters
 *
 * Return: pointer to the byte in s that matches one of the bytes in accpet
 *         Null - if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
	}
	return ('\0');
}
