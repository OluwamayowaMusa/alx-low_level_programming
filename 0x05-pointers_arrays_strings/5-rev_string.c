#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Sting passed
 */
void rev_string(char *s)
{
	char c, *d, *e;
	int i, j, k;

	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		j = i++;
	}
	i = j--;
	for (k = 0; k < i / 2; k++)
	{
		d = &s[k];
		e = &s[j];
		c = *(s + k);
		*d = *(s + j);
		*e = c;
		j--;
	}
}
