#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry - point
 * @argc: qwerty
 * @argv: qwerty
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
