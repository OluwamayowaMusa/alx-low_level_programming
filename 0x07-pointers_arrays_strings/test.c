#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of
 * the two matrix of interest
 * @a: two dimensional array
 * @size: size of square of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_1 = 0, sum_2 = 0;

	for (i = 0, j = size - 1; i < size * size; i += size + 1, j += size - 1)
	{
		sum_1 += a[i];
		sum_2 += a[j];
	}
	printf("%d, %d\n", sum_1, sum_2);
}

/**
 * main - test function
 */
void main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};
	print_diagsums((int *)c3, 3);
}
