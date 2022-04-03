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
	int len_1, len_2, j;
	char *str = dest;

	len_1 = _strlen(dest);
	len_2 = _strlen(src);
	if (n > len_2)
		n = len_2;
	for (j = 0; j < n || src[j] != '\0'; j++)
		dest[len_1 + j] = src[j];
	dest[len_1 + j] = '\0';
	return (str);
}
