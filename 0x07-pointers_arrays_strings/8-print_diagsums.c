#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of the two matrix of interest
 * @a: two dimensional array
 * @size: size of square of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_1 = 0, sum_2 = 0;

	for (i = 0, i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum_1 += a[i][j];
			else if (i + j == size)
				sum_2 += a[i][j];
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
