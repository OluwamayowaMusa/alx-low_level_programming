#include <stdio.h>

/**
 * main - test
 */
void main(void)
{
	char *s = "hello world";
	int i;

	for (i = 0; s[i] > '\0'; i++)
	{
		printf("%s\n", s + i);
	}
}
