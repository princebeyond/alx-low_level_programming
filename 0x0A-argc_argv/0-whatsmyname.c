#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: qwert
 * @argv: qwerty
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}

