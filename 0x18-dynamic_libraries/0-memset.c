#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	char *p;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p = &s[i];
		*p = b;
	}
	return (ptr);
}
