#include "main.h"

/**
 * set_string - Sets the value of a pointer to char
 * @s: Pointer to pointer variable
 * @to: Pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
