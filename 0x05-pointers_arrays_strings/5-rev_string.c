#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Sting passed
 */
void rev_string(char *s)
{
	char *tmp, c;
	int i, h;

	tmp = s;
	i = 0;
	while (c != '\0')
	{
		c = *(str + i);
		h = i++;
	}
	i = 0;
	h--;
	while (h > -1)
	{
		*(s + i) = *(tmp + h);
		i++;
		h--;
	}

}
