#include "main.h"

/**
 * _strcmp - Compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int len_1 = 0, len_2 = 0, i, n;
	int result = 0;

	while (*(s1 + len_1) != '\0')
		len_1++;
	while (*(s2 + len_2) != '\0')
		len_2++;
	if (len_1 > len_2)
		n = len_1;
	else if (len_1 < len_2)
		n = len_2;
	else
		n = len_1;
	for (i = 0; i < n; i++)
	{
		result = s1[i] - s2[i];
		if (result != 0)
			break;
	}
	return (result);

}
