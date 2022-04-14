#include "main.h"

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char
 * @c: character
 * @size: Size of array
 *
 * Return: pointer to array
 *         Null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return ('\0');

	ptr = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
