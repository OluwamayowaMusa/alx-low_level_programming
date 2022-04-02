#include "main.h"

/**
 * _strlen - Length of string
 * @s: String passed
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i, h;
	char c = ' ';
	
	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		h = i++;
	}
	return (h);
}

/**
 * _strcat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	char str[1000], *str1;
	int i, h, len_1, len_2;

	len_1 = _strlen(dest);
	len_2 = _strlen(src);
	for (i = 0; i < len_1 && dest[i] != '\0'; i++)
		str[i] = dest[i];
	dest = str;
	for (h = 0; h < len_2 && src[h] != '\0'; h++, i++)
		dest[i] = src[h];
	for (; i < len_1 + len_2 + 1; i++)
		dest[i]	= '\0';
	str1 = dest;
	return (str1);
}
