#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	/*allocate memory for elements in each pointer in  array*/
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(sizeof(int) * width);
		if (*(ptr + i) == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(ptr + i) + j) = 0;
		}
	}
	return (ptr);

}
/**
 * print_grid - print a grid of integers
 * @grid: the address of two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing
 */
void print_grid(int **grid, int width, int height)
{
	int w, h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - test function
 *
 * Return: Always 0
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
		return (1);
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	return (0);
}
