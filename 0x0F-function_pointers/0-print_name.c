#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name passed
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
