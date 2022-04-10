#include "main.h"

/**
 * _strcmp - compare two strings
 * @str1: First string
 * @str2: Second string
 * Return: 1 - if the strings are the same
 *	   0 - otherwise
 */
int _strcmp(char *str1, char *str2)
{
	if (*str1 - *str2 != 0)
		return (0);
	if (!*str1)
		return (1);
	return  (_strcmp(str1 + 1, str2 + 1));
}

/**
 * rev_string - reverse string
 * @s: String passed
 * @str: String return
 * @index: index
 * Return: reverse string
 */
void rev_string(char *s, char (*str)[100000], int *index)
{

	if (*s)
	{
		rev_string(s + 1, str, index);
		str[0][*index] = *s;
		*index = *index + 1;
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String passed
 *
 * Return: 1 - A string is a palindrome
 *	   0 - otherwise
 */
int is_palindrome(char *s)
{
	char str[100000];
	int i = 0, j;

	rev_string(s, &str, &i);
	j = _strcmp(s, str);
	return (j);
}

