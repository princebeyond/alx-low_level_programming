#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: yhh
 * Return: qwertyy
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n >= 0)
	{
		return (n % 10) + _sqrt_recursion(n / 10);
	}
	return (0);
}

