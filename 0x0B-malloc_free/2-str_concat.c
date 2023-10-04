#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concentrate string
 * @s1: first string
 * @s2: sec string
 * Return: success or null.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len = strlen(s1);
	size_t len2 = strlen(s2);
	size_t tl = len + len2 + 1;
	char *tt;

	tt = (char *)malloc(tl);

	if (s1 != NULL)
	{
		strcpy(tt, s1);
	}
	if (s2 != NULL)
	{
		strcat(tt, s2);
	}

	return (tt);
}
