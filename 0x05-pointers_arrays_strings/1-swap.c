#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: First value
 * @b: Second Value
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
