#include <stdio.h>
#include <string.h>
/**
 * main - that prints all arguments it receives.
 * @argv: str
 * @argc: len
 *
 * Return: success 0.
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; argv[i] != NULL; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
