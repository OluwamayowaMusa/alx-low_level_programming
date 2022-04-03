#include "main.h"
#include <stdio.h>

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

/**
 * main - test function
 */
void main(void)
{
	int a[] = {0, 1, 2};
	int i = 0;

	reverse_array(a, 3);
	while (i < 3)
	{
		if (i != 0);
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");

}
