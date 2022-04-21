#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array of integers
 * @size: Size of array
 * @cmp: Pointer to function
 *
 * Return: Index of integer in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, con;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		con = cmp(array[i]);
		if (con != 0)
			return  (i);
	}
	return (-1);
}
