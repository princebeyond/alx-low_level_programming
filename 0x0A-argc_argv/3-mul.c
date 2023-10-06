#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main -  multiplies two numbers.
 * @argv: str
 * @argc: len
 * Return: success 1 or 0.
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int res;

	if (argc == 3)

	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		res = n1 * n2;
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
