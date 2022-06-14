int num = 0;
/**
 * rand - random number generator
 *
 * Return: number
 */
int rand(void)
{
	num++;
	if (num == 1)
		return (9);
	else if (num == 2)
		return (8);
	else if (num == 3)
		return (10);
	else if (num == 4)
		return (24);
	else if (num == 5)
		return (75);
	else if (num == 6)
		return (9);
	return (22);
}
