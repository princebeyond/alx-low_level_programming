#include <stdio.h>

/**
 * main - Entry
 * Return (0)
 */

int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		printf("%c", i);

	for (i = 'A'; i <= 'Z'; i++)
		printf("%c", i);
	return (0);
}
