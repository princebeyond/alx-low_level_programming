#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - entry point
 * @n: asdfghjk
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		int l = n;
		for (n = l; l <= 98; l++)
		{
			if (l != 98)
			{
				printf ("%d, ", l);
			} else
			{
				printf("%d\n", l);
			}
		}
	} else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf ("%d, ", i);
			} else
			{
				printf ("%d\n", i);
			}
		}
	}
}
