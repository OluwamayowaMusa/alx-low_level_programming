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
	int len_1, len_2, i;
	char *str;

	len_1 = _strlen(dest); /* length of dest */
	len_2 = _strlen(src); /* lengthof src */
	for (i = 0; i < len_2 && src[i] != '\0'; i++)
		dest[len_1 + i] = src[i];
	dest[len_1 + i] = '\0';
	str = dest;

	return (str);
}
