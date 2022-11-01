#include "main.h"

/**
 * *_memcpy - copy function
 * @src: the source to be copied
 * @dest: the destination
 * @n: qwerty
 *
 * Return: Nothing.
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
