#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int hour, minute;
	for (hours = 0; hour <= 23; hour++)
	{
		for (hours = 0; hour <= 23; hour++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour / 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute / 10) + '0');
			_putchar('\n');
		}
	}
}

