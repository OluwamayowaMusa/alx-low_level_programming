#include <unistd.h>
#include <stdlib.h>

/**
 * srand - Overwrite srand function
 * @seed: seed passed
 *
 */
void srand(unsigned int __attribute__((unused)) seed)
{


	write(STDOUT_FILENO, "9 8 10 24 75 - 9\n", 17);
	write(STDOUT_FILENO, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
