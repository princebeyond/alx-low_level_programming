#include "main.h"
/**
 * print_last_digit - entry point
 * @n:  llih
 * Return: success 0.
 */
int print_last_digit(int n)
{
	int m;

	if (n < 10)
		n = -n;

	m = n % 10;
	if (m < 10)
		m = -m;
	_putchar(m + '0');
	return (m);
}
