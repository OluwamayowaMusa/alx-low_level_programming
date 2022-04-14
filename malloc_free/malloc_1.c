#include <stdio.h>
#include <stdlib.h>

/**
 * main - Introduction to malloc and free
 *
 * Return: 0
 */
int main(void)
{
	char *str;
	int *tab;

	str = malloc(sizeof(char) * 3);
	tab = malloc(sizeof(*tab) * 3);
	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';
	tab[0] = 98;
	tab[1] = -1024;
	tab[2] = 402;
	printf("%s\n", str);
	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
	return (0);
}
