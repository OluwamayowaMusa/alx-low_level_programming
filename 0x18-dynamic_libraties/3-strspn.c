#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		c = 'a';
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c = 'b';
				break;
			}
			j++;
		}
		if (c == 'a')
			return (i);
	}
	return (i);
}
