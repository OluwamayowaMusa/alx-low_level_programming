#include <stdio.h>

/**
 * modif_my_char_var - modify the character variable
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - Expalin what is happening the memory
 *
 * Return: 0
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	modif_my_char_var(p, c);
	printf("Value of 'c': %c\n", c);
	return (0);
}
