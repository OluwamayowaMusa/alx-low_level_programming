#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Sting passed
 */
void rev_string(char *s)
{
	char c, *d, tmp[500];
	int i, j, k, l;

	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		j = i++;
	}
	j--;
	for (k = 0; k <= j; k++)
	{
		tmp[k] = *(s + j);
		j--;
	}
	for (l = 0; l <= k; l++)
	{
		d = &s[l];
		*d = tmp[l];
	}
}
