/* Functions Declarations */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/* Function Definitions */
/**
 * add - Add two numbers
 * @a: First Number
 * @b: Second Number
 *
 * Return: addition of two numbers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtract two numbers
 * @a: First Number
 * @b: Second Number
 *
 * Return: Subtraction of two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiply two numbers
 * @a: First Number
 * @b: Second Number
 *
 * Return: Multiplication of two Numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divide two numbers
 * @a: First Number
 * @b: Second Number
 *
 * Return: Division of two Numbers
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - Modular divison
 * @a: First Number
 * @b: Second Number
 *
 * Return: Modular Division of two numbers
 */
int mod(int a, int b)
{
	return (a % b);
}
