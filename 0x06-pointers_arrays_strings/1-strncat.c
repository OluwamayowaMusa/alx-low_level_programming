#include "main.h"

/**
 * _strlen - Length of string
 * @s: String passed
 * Return: Length
 */
int _strlen(char *s)
{
	char c = ' ';
	int i, h;

	while (c != '\0')
	{
		c = *(s + i);
		h = i++;
	}
	return (h);
}

/**
 * _strncat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: Number bytes of second string
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_1, i;
	char *str;

	len_1 = _strlen(dest);
	len_2 = _strlen(src);
	for (i = 0; i < n; i++)
		dest[len_1 + i] = src[i];
	dest[len_1 + i] = '\0';
	str = dest;
	return (str);
}
