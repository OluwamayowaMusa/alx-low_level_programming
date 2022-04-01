#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Sting passed
 */
void rev_string(char *s)
{
	char c, *d, *e;
	int i, j, h;

	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		j = i++;
	}
	i = j--;
	for (h = 0; h < i / 2; h++)
	{
		d = &s[h];
		e = &s[j];
		c = *(s + h);
		*d = *(s + j);
		*e = c;
		j--;
	}
}
