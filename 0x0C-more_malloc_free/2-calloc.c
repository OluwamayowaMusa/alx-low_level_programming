#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of elements
 * @size: size of 1 element
 *
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < nmemb; j++)
	{
		if (size == sizeof(char))
			((char *)ptr)[j] = '\0';
		else
			((int *)ptr)[j] = '\0';
	}
	return (ptr);
}
