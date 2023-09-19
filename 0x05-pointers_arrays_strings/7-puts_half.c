#include "main.h"
/**
 * puts_half - eee
 * @str: rrr
 */
void puts_half(char *str)
{
	int i = 0;
	int n;
	int m;

	while (str[i] != '\0')
	{
		i++;
	}
	n = (i + 1) / 2;
	for (m = n; m < i; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
