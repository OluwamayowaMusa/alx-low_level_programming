#include "main.h"


char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = _strcmp(haystack + i, needle);
		if (j == 0)
			return (haystack + i);
	}
	return ('\0');
}
