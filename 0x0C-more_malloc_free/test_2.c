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
		((int *)ptr)[i] = '\0';
	return (ptr);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	char *a;
	int i;

	a = _calloc(7, sizeof(int));
	for (i = 0; i < 7; i++)
		printf("%c +  %d\n", a[i], a[i]);
	return (0);
}
