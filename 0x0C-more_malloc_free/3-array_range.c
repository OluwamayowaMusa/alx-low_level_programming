#include "main.h"
#include <stdlib.h>

/**
 * array_range -Creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;
	return (arr);
}
