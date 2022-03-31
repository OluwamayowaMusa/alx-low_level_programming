#include <stdio.h>

/**
 * main - using pointers to access the elements of an array
 *
 * Return: 0
 */
int main(void)
{
	int a[2];

	*(a + 0) = 1;
	*(a + 1) = 2;
	printf("Value and Address of 'a[0]': %d %p\n", *(a + 0), (a + 0));
	printf("Value and address of 'a[1]': %d %p\n", *(a + 1), (a + 1));

	return (0);
}
