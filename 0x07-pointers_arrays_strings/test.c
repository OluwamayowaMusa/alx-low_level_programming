#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to char
 * @s: Pointer to pointer variable
 * @to: Pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}

/**
 * main - test function
 */
void main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";
	
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
}
