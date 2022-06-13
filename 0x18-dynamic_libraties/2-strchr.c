#include "main.h"

char *_strchr(char *s, char c)
{
	char *str, st[1000000], a[98] = "nil";
	int i, j = 0;

	str = st;
	if (c == '\0')
		return (str);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			for (j = 0; s[i] != '\0'; j++, i++)
				st[j] = s[i];
			return (str);
		}
	}
	str = a;
	return (str);
}
