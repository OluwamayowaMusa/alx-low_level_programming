#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of string
 * @s: String passed
 *
 * Return: Length
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}


/**
 * string_nconcat - Concatenates twp strings
 * @s1: First String
 * @s2: Second String
 * @n: Number of bytes to be concatenated in second string
 *
 * Return: Concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1, len_2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	len_1 = _strlen(s1);/*length of first string*/
	len_2 = _strlen(s2);/*length of second string*/
	if (n >= len_2)
		n = len_2;
	str = malloc(sizeof(char) * (len_1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
