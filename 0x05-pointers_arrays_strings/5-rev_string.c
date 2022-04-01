#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Sting passed
 */
void rev_string(char *s)
{
	char c, *d, *tmp;
	int i, j, k;

	i = 0;
	tmp = s;
	while (c != '\0')
	{
		c = *(s + i);
		j = i++;
	}
	j--;
	for (k = 0; k <= j; k++)
	{
		d = &s[k];
		*d = *(tmp + j);
		j--;
	}

}
