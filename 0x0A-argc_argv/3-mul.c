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
	int i, mul;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
