#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Prints an array
 * @array: Array passed
 * @size: Size of array
 * @action: Pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

/**
 * print_elem - prints an integer
 * @elem: The integer to print
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4086};

	array_iterator(array, 5, &print_elem);
	return (0);
}
