#include "main.h"
#include <stdio.h>

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
 * main - Concatenates two strings
 * Return: String
 */
void main(void)
{
	char str[98], c;
	char dest[98] = "Hello ";
	char src[] = "World!\n";
	int i, h, len_1, len_2, len_3;

	len_1 = _strlen(dest);
	len_2 = _strlen(src);
	printf("%d %d\n", len_1, len_2);
	for (i = 0; i < len_1 && dest[i] != '\0'; i++)
		str[i] = dest[i];
	for (h = 0; h < len_2 && src[h] != '\0'; h++, i++)
		str[i] = src[h];
	for (; i < len_1 + len_2 + 1; i++)
		str[i] = '\0';
	len_3 = _strlen(str);
	printf("%d %s", len_3, str);
}
