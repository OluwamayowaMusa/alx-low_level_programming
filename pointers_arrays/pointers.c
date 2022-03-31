#include <stdio.h>

/**
 * main - Explaining Pointers
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	n = 98;
	c = 'A';
	p = &n;
	pp = &c;
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Value of 'c': %c\n", c);
	printf("Address of 'c': %p\n", &c);
	printf("value of 'pp': %p\n", pp);
	*p = 402;
	*pp = 'C';
	printf("Value of 'n': %d\n", n);
	printf("Value of 'c': %c\n", c);
	return (0);
}
