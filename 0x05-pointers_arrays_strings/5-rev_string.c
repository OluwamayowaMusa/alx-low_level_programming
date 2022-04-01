#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Sting passed
 */
void rev_string(char *s)
{
	char tmp[500], c;
	int i, j, k;

	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		j = i++;
	}
	j--;
	for (k = 0; j > -1; j--)
	{
		tmp[k] = *(s + j);
		k++;
	}
	s = tmp;
}
