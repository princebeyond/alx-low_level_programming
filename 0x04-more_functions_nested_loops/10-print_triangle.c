#include "main.h"
/**
 * print_triangle - fhj
 * @size
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int k;

		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
