#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array
 * @size: Size of array
 * @action: Function pointers
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0;  i < size; i++)
			action(array[i]);
	}
}
