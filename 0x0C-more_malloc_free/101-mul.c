#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * valid_number - checks if a string contains only digits
 * @str: the string to check
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int valid_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - main entry
 * @argc: len
 * @argv: str
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, res;

	if (argc != 3)
	{
		_putchar ('E');
		_putchar ('r');
		_putchar ('r');
		_putchar ('o');
		_putchar ('r');
		_putchar ('\n');
		return (98);
	}

	if (!valid_number(argv[1]) || !valid_number(argv[2]))
	{
		_putchar ('E');
		_putchar ('r');
		_putchar ('r');
		_putchar ('o');
		_putchar ('r');
		_putchar ('\n');
		return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);
	res = num1 * num2;

	printf("%u\n", res);
    
	return 0;
}

