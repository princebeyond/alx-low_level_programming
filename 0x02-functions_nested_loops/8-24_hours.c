#include "main.h"
/**
 * jack_bauer - entry point
 * @void: asdfjkl
 * Return: success 0 or 1.
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
		_putchar('0' + (H / 10));
		_putchar('0' + (H % 10));
		_putchar(':');
		_putchar('0' + (M / 10));
		_putchar('0' + (M % 10));
		_putchar('\n');
		}
	}
}
