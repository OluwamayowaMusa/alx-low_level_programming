#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	int *a, i;

	a = array_range(1, 3);
	for (i = 0; i < (3 - 1 + 1); i++)
		printf("%d\n", a[i]);
}
