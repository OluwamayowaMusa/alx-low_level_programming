#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of string
 * @s: string passed
 * Return: Length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * _strdup - Copies a string to an allocated space in the memory
 * @str: String  passed
 * Return: Pointer to duplicated string
 *         NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * _strlen(str));/*len of string times size of char*/
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
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

	s = _strdup("First solve the problem, then write the code");
	if (s == NULL)
	{
		printf("Failed to allocate memory\n");
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
