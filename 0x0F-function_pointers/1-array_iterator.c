#include "function_pointers.h"

/**
 * array_iterator - Prints an array
 * @array: Array passed
 * @size: Size of array
 * @action: Pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL || array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
