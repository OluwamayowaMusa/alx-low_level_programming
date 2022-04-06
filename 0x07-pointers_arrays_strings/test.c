#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @dest: First string
 * @src: Seccond string
 *
 * Return: integer
 */
int _strcmp(char *dest, char *src)
{
	int i, j, res = 0;

	for (i = 0, j = 0; src[i] != '\0'; i++, j++)
	{
		res = dest[i] - src[j];
		if (res != 0)
			return (res);
	}
	return (res);
}

/**
 * _strstr - Locates a substring
 * @haystack: String scanned
 * @needle: Substring to be located
 *
 * Return: - A pointer to the beginning of the located substring
 *	   - NULL if no substring is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = _strcmp(haystack + i, needle);
		if (j == 0)
			return (haystack + i);
	}
	return ('\0');
}

/**
 * main - test function
 */
void main(void)
{
	char *s = "Geeks for Geeks";
	char *f = "for";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
}
