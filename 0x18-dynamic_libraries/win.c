#include <unistd.h>

/**
 * puts - Overwrite function
 * @s: String passed
 *
 * Return: Number of Bytes written
 */
int puts(const char *s)
{
	write(STDOUT_FILENO, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
