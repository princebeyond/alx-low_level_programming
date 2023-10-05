#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	unsigned long int i = 0;

	while (i <= strlen(s))
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);

}
