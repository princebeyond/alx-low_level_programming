#include <stdio.h>
#include <string.h>
/**
 * main -  program that prints the number of arguments passed into it.
 * @argc: counts
 * @argv: str
 * Return: success 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
