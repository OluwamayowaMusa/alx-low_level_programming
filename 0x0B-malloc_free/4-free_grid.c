#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free the 2-dimensional grid
 * @grid: 2-dimensional array
 * @height: Height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
