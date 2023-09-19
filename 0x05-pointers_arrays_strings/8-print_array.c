#include <stdio.h>
#include "main.h"
/**
 * print_array - qqqawerty
 * @n: hghhg
 * @a: hddhdh
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0 && i != -1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
