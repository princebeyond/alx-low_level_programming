#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char lletters, uletters;

	for (lletters = 'a'; lletters <= 'z'; lletters++)
	{
		putchar(lletters);
	}
	for (uletters = 'A'; uletters <= 'Z'; uletters++)
	{
		putchar(uletters);
	}
	putchar('\n');
	return (0);
}
