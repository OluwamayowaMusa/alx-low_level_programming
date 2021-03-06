#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of elements
 * @size: size of 1 element
 *
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		((char *)ptr)[i] = '\0';
	return (ptr);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	int *a;
	int i;

	a = _calloc(50, sizeof(*a));
	for (i = 0; i < 50; i++)
		printf("0x%02x +  %d\n", a[i], a[i]);
	return (0);
}
