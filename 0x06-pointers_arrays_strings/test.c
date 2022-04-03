#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: Number bytes of second string
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_1 = 0, len_2 = 0, i;
	char *str = dest;

	while (*(src + len_2) != '\0')
		len_2++;
	while (*(dest + len_1) != '\0')
		len_1++;
	if (n > len_2)
		n = len_2;
	for (i = 0; i < n; i++)
		dest[len_1 + i] = src[i];
	dest[len_1 + i] = '\0';

	return (str);
}
