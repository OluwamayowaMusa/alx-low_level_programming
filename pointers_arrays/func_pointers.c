#include <stdio.h>

/**
 * modify_the_variable - Set integer to 402
 * @m: a pointer the integer we want to set
 *
 * Return: nothing
 */
void modify_the_variable(int *m)
{
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	*m = 402;
}

/**
 * main - how to change the value of a variable from outside a function
 * it is declared in, using pointers.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;
	printf("Value of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modify_the_variable(p);
	printf("Value of 'n' after the call: %d\n", n);
	return (0);
}
