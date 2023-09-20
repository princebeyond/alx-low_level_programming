#include  "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: number to be reversed
 * @n:  is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = rev;
	}
}
