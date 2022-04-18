#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocatedspace of ptr
 * @new_size: Size of the new memory block
 *
 * Return: Pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i, j;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr =  malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (old_size > new_size)
		j = new_size;
	if (old_size < new_size)
		j = old_size;
	for (i = 0; i < j; i++)
	{
		if (old_size % sizeof(int) == 0)
			((int *)arr)[i] = ((int *)ptr)[i];
		else
			((char *)arr)[i] = ((char *)ptr)[i];
	}

	return (arr);
}
