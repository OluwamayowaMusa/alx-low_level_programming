#include <unistd.h>
#include <stdlib.h>

/**
 * puts - Overwrite puts function
 * @s: String passed
 *
 * Return: Number of bytes written
 */
int puts(const char *s)
{
	write(STDOUT_FILENO, "9 8 10 24 75 - 9\n", 17);
	write(STDOUT_FILENO, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
