#include "main.h"


char *_strcat(char *dest, char *src)
{
	int len_1, len_2, i;
	char *str;

	len_1 = _strlen(dest);
	len_2 = _strlen(src);
	for (i = 0; i < len_2 && src[i] != '\0'; i++)
		dest[len_1 + 1] = src[i];
	dest[len_1 + i] = '\0';
	str = dest;

	return (str);
}
