#include <stdio.h>
#include "main.h"
/**
 * _strcpy - hsbsbs
 * @dest: hshshsj
 * @src: sjshsjjs
 *
 * Rerurn: 0. success.
 */
char *_strcpy(char *dest, char *src)
{
	char o_d = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src++;
	}
	*dest = '\0';
	return (o_d);
}
