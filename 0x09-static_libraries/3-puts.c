#include "main.h"
/**
 * _puts - ppp
 * @s: str
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
