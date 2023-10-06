#include <stdio.h>
#include <string.h>
/**
 * main - program that prints its name, followed by a new line
 * @argv: string
 * @argc: cont len
 *
 * Return: success 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
