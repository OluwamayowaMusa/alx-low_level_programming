#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Sting passed
 */
void rev_string(char *s)
{
	char c, *d, *e, f;
	int i, j, k;

	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		j = i++;
	}
	j--;
	for (k = 0; k <= j / 2; k++)
	{
		d = &s[k];
		e = &s[j];
		f = *(s + k);
		*d = *(s + j);
		*e = f;
		j--;
	}

}
