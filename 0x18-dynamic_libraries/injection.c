int num = 0;
/**
 * rand - random number generator
 *
 * Return: number
 */
int rand(void)
{
	num++;
	switch (num)
	{
		case 1:
			return (18);
		case 2:
			return (8);
		case 3:
			return (10);
		case 4:
			return (24);
		case 5:
			return (75);
		case 6:
			return (9);
	}
	return (22);
}
