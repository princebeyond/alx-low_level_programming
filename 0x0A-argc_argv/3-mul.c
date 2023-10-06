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
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int res = n1 * n2;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}
