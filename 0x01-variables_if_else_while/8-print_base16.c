#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int num;
	int let;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (let = 'a'; let <= 'f'; let++)
	{
		putchar(let);
	}

	putchar('\n');
	return (0);
}
