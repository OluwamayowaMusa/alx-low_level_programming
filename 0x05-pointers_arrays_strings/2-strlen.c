#include "main.h"

/**
 * _strlen - Return the length of the string passed
 * @s: String to be passed
 * Return: the length of string
 */
int _strlen(char *s)
{
	char c = ' ';
	int i, h;

	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		h = i++;
	}
	h = h - 1;
	return (i);
}
