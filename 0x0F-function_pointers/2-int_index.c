#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Pointer to array
 * @size: Size of array
 * @cmp: Function pointer
 *
 * Return: -1 - if no element matches / size <= 0
 *          index of the first element which cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
