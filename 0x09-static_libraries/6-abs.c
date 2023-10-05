#include "main.h"
/**
 * _abs - entry point
 * @n: ligd
 * Return: syccess 1 or 0.
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (-n);
	} else if (n > 0)
	{
		return (n);
	}

	return (0);
}
