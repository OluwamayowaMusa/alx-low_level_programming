#include "lists.h"


void before_main(void) __attribute__((constructor));

/**
 * before_main - Run before the main function
 */


void before_main(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
