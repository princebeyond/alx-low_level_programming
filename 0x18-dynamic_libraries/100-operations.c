#include <stdio.h>

/**
 * add - adding
 * @a: Elements
 * @b: same
 *
 * Return: ans
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subbing
 * @a: Elements
 * @b: same
 *
 * Return: ans
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply
 * @a: Elements
 * @b: same
 *
 * Return: ans
 */

int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - substract
 * @a: Elements
 * @b: same
 *
 * Return: ans
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - modifying
 * @a: Elements
 * @b: same
 *
 * Return: ans
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
