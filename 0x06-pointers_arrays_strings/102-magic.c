#include <stdio.h>

/**
 * main - Prints 98.
 *
 *Return: 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	p = &a[2];
	*p = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
