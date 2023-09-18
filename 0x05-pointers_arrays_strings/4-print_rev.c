#include "main.h"
/**
 * print_rev - wrty
 * @s: qwert
 */
void print_rev(char *s)
{
	int rev2 = 0;
	int rev;

	while (*s != '\0')
	{
		rev2++;
		s++;
	}
	s--;
	for (rev = rev2; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

