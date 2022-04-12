#include "main.h"

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

char *_strncat(char *dest, char *src, int n)
{
	int len_1, len_2, i;
	char *str = dest;

	len_1 = _strlen(dest);
	len_2 = _strlen(src);
	if (n > len_2)
		n = len_2;
	for (i = 0; i < n; i++)
		dest[len_1 + i] = src[i];
	dest[len_1 + i] = '\0';
	return (str);
}
