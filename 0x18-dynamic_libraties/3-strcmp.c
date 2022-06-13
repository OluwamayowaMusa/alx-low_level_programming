#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, result = 0;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		result = s1[i] - s2[i];
		if (result != 0)
			return (result);
	}
	return (result);
}
