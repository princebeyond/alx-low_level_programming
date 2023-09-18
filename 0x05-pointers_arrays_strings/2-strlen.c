#include "stdio.h"
/**
 *  _strlen - qwe
 *  @s: ddd
 *
 *  Return: success
 */
size_t _strlen(const char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
