#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of string
 * @s: string passed
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int len  = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the concatenated strings
 *         NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len_1, len_2, i, j;
	char *ptr;

	len_1 = _strlen(s1);
	len_2 = _strlen(s2);

	ptr = malloc(sizeof(char) * (len_1 + len_2) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);

}
/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);

	return (0);
}
