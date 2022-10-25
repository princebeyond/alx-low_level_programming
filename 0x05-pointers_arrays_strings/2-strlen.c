#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
