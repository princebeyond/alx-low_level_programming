#include <stdio.h>
/**
 * main - main function
 *
 * Return: success 0.
 */
int main(void)
{
	int f = 1, s = 2;

	printf("%d, %d, ", f, s);

	int i;

	for (i = 3; i <= 50; i++)
	{
		int nxt = f + s;
		printf("%d, ", nxt);

		f = s;
		s = nxt;
	}
	printf("\n");

	return (0);
}
