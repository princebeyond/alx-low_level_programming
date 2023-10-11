#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 or 99 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);
	char *opera;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	opera = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(opera);
	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(opera, "/") || strcmp(opera, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
