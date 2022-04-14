#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	ptr = malloc(sizeof(str));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}

/**
 * main - test function
 */
void main(void)
{
	char *s;

	s = _strdup("Holberton");
	if (s == NULL)
	{
		printf("Failed to allocate memory\n");
	}
	printf("%s\n", s);
	free(s);
}
