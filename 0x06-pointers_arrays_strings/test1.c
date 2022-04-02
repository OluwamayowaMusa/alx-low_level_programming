#include <stdio.h>

/**
 * main - length of string
 */
void main(void)
{
	char s[5] = "test";
	char c = ' ';
	int i, h;

	i = 0;
	printf("%s\n", s);
	while (c != '\0')
	{
		c = *(s + i);
		printf("%c\n", c);
		h = i++;
	}
	printf("%d\n", h);
}
