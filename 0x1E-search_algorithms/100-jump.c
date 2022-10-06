#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Seaches for a value using the Jump Search algorithm
 *
 * @array: Pointer to first element
 * @size: Number of elements in `array`
 * @value: Value to be search for
 *
 * Return: The index where value is located
 *         -1 if not found
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, index, stop;
	int ctrl = 0;

	if (!array)
		return (-1);
	if (value == array[0])
		return (0);
	jump = (size_t)sqrt(size);
	for (index = 0; index < size; index += jump)
	{
		if (value <= array[index])
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					index - jump, index);
			ctrl = 1, index -= jump;
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	if (ctrl == 1)
	{
		stop = index + jump;
		for (; index <= stop; index++)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			if (value == array[index])
				return (index);
		}
	}
	else
	{
		index -= jump;
		printf("Value found between indexes [%ld] and [%ld]\n", index,
				index + jump);
		for (; index < size; index++)
		{
			printf("Value checked array[%ld] = %d\n", index, array[index]);
		}
	}
	return (-1);
}
