#include "main.h"

void _puts(char *s)
{
	int i;

	for (i = 0; *s; i += 2)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}
