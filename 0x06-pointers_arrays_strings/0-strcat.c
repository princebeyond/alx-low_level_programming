#include "main.h"
#include <stdio.h>
/**
 * _strcat - nwnwnw
 * @dest: hdhdh
 * @src: shhsh
 *
 * Return: hdhdn
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0;src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
