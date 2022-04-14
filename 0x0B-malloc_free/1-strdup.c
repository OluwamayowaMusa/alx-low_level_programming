#include "main.h"
#include <stdlib.h>

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
}
