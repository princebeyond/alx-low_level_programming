#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: str1
 * @s2: sttr2
 * @n: com
 * Return: 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *res;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;

	if (n >= len2)
	{
		n = len2;
	}
	res = malloc(len1 + n + 1);
	if (res == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(res, s1);
	else
		*res = '\0';
	strncat(res, s2, n);
	return (res);
}
