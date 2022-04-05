#include <stdio.h>

/**
 * main - Understanding pointer to pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int *p;
	int **ptr;

	i = 67;
	p = &i; /*take the address of i */
	ptr = &p; /*take the address of the pointer p*/
	printf("Size of 'i': %lu\n", sizeof(i));
	printf("Size of 'p': %lu\n", sizeof(p));
	printf("Size of 'ptr': %lu\n", sizeof(ptr));
	printf("---------------\n");
	printf("Value of i = %d\n", i);
	printf("Value available at *p = %d\n", *p);
	printf("Value available at **ptr = %d\n", **ptr);
	return (0);
}
