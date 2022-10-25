#include "main.h"

/**
 * print_rev - to be printed backward
 * @s: string to be printed
 */
void print_rev(char *s)
{
	for (*s)
		_putchar(*s--);

	_putchar('\n');
}
