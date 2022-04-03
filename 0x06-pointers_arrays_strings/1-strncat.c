#include "main.h"

/**
 * _strlen - Length of string
 * @s: String passed
 * Return: Length
 */
int _strlen(char *s)
{
	char c = ' ';
	int i = 0, h;

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
	int len_1, len_2, i;
	char *str = dest;

	len_1 = _strlen(dest);
	len_2 = _strlen(src);
	if (n > len_2)
		n = len_2;
	for (i = 0; i < n; i++)
		dest[len_1 + i] = src[i];
	dest[len_1 + i] = '\0';
	return (str);
}
