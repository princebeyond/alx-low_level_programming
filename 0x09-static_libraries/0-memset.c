#include "main.h"
#include <stdio.h>
/**
 * _memset - function fills the first n bytes
 * @n: fills the first n bytes
 * @b: constant bytes
 * @s: pointer
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
