#include <stdio.h>

/**
 * show_mem_rep - show bytes in memory
 * @start: Pointer to variable
 * @n: end 
 */
void show_mem_rep(char *start, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(" %.2x", *(start + i));
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
	int i = 1;

	show_mem_rep((char *)&i, sizeof(i));
	return (0);
}
