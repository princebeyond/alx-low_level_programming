#include <stdio.h>
/**
 * main - main function
 *
 * Return: success 0.
 */
int main(void)
{
	int i;
	unsigned long f = 1, s = 2, nxt;

	printf("%lu, %lu, ", f, s);

	for (i = 3; i <= 50; i++)
	{
		nxt = f + s;


		printf("%lu", nxt);

		f = s;
		s = nxt;

		if (i == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
