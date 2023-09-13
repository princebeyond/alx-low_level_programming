#include <stdio.h>
/**
 * main - main functin
 *
 * Return: 0.
 */
int main(void)
{
	int limit = 4000000;
	int first = 1, second = 2;
	int sum = 0;
	int nxt;

	while (second <= limit)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}

	nxt = first + second;
	first = second;
	second = nxt;
	}

	printf("%d: %d\n", limit, sum);

	return (0);
}

