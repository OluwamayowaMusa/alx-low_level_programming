#include "main.h"
#include <stdio.h>

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
	int len_1, len_2, i;
	char *str;

	len_1 = _strlen(dest);
	len_2 = _strlen(src);
	if (n > len_2)
		n = len_2;
	for (i = 0; i < n; i++)
		dest[len_1 + i] = src[i];
	dest[len_1 + i] = '\0';
	str = dest;
	return (str);
}

/**
 * main - Test function
 * Return: 0
 */
int main(void)
{
	char *ptr;
	char s1[98] = "Holberton ";
	char s2[] = "School!\n";

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 50);
	printf("%s\n", ptr);
	return (0);

}
