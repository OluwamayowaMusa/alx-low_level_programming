#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Make a 2-dimensional array of integers
 * @width: Width of array
 * @height: Height of array
 *
 * Return: -Pointer to a 2 dimensional array
 *         -NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocate memory for array of pointers*/
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*allocate memory for elements of pointer in array*/
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *) malloc(sizeof(int) * width);
		if (*(ptr + i) == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(*(ptr + i));
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(ptr + i) + j) = 0;
	return (ptr);
}
