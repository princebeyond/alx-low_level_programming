#include "main.h"
/**
 * print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
	int l;
	char k;

	for (l = 1; l <= 10; l++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
