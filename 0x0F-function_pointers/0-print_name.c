#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: String passed
 * @f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
