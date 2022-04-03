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
	int len1, len2, j;
	char *str = dest;

	len1 = _strlen(dest);
	len2 = _strlen(src);
	if (n > len2)
		n = len2;
	for (j = 0; j < n || src[j] != '\0'; j++)
		dest[len1 + j] = src[j];
	dest[len1 + j] = '\0';
	return (str);
}
