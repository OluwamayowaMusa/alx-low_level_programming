#include "main.h"

/**
 * reverse_array - Reverse thr content of an array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int *i, *j;
	int h, k;

	for (k = 0; k < n / 2; k++)
	{
		i = &a[k];
		j = &a[n - 1 - k];
		h = a[k];
		*i = a[n - 1 - k];
		*j = h;
	}
}
