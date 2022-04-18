#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocatedspace of ptr
 * @new_size: Size of the new memory block
 *
 * Return: Pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i, j;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr =  malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (old_size > new_size)
		j = new_size;
	if (old_size < new_size)
		j = old_size;
	for (i = 0; i < j; i++)
	{
		((char *)arr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (arr);
}

/**
 * print_buffer - Print buffer in hexa
 * @buffer: the address of the memory to print
 * @size: the address of the memory to print
 */
void print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
	i = 0;
	while (i < 98)
	{
		p[i++] = 98;
	}
	print_buffer(p, 98);
	free(p);
	return (0);
}
