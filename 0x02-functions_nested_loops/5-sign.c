#include "main.h"
/**
 * print_sign - life
 * @n: ll
 * Return: success 1 or 2
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');

	return (0);
}
