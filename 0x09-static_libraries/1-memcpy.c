#include "main.h"
#include <stdio.h>
/**
 * _memcpy -  copies function
 * @dest: mem
 * @src: source
 * @n: bytes
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
