#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 * @argc: len
 * @argv: str
 *
 * Return: success 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
