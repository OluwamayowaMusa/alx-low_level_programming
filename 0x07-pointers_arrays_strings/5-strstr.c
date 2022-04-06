#include "main.h"

/**
 * _strcmp - compare two strings
 * @str1: First string
 * @str2: Second string
 *
 * Return: Integer
 */
int _strcmp(char *str1, char *str2)
{
	int i, j, res = 0;

	for (i = 0, j = 0; str2[j] != '\0'; i++, j++)
	{
		res = str1[i] - str2[j];
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
