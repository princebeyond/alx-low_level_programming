#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char rletter;

	for (rletter = 'z'; rletter >= 'a'; rletter--)
	{
		putchar(rletter);
	}

	putchar('\n');

	return (0);
}
