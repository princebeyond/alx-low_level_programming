#include "main.h"
/**
 * _strncat - for concatenates two strings
 * @src: source code
 * @dest: will be returned
 * @n: bytes
 * Return:  a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
