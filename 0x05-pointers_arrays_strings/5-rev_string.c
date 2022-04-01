#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Sting passed
 */
void rev_string(char *s)
{
	char c, *d;
	int i, j, k, h;

	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		j = i++;
	}
	j--;
	for (k = 0; k <= j; k++)
	{
		d = &s[k];
		*d = *(s + j);
	}

}
