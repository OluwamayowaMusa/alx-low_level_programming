#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;
	while (*(src + len))
		len++;
	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
