#include "main.h"

/**
 * _strlen1 - Length of string
 * @s: String passed
 * Return: Length
 */
int _strlen1(char *s)
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
	int len_1, len_2, i;
	char *str;

	len_1 = _strlen1(dest);
	len_2 = _strlen1(src);
	if (n > len_2)
		n = len_2;
	for (i = 0; i < n || src[i] != '\0'; i++)
		dest[len_1 + i] = src[i];
	dest[len_1 + i] = '\0';
	str = dest;
	return (str);
}
