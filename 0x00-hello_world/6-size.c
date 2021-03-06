#include <stdio.h>

/**
 * main - Entry point
 * Print the size of data types
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long l;
	long long ll;
	char c;
	float f;

	printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(l));
	printf("Size of a long long int: %llu byte(s)\n",
		(unsigned long long int)sizeof(ll));
	printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}
