#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str:  pointer
 * Return: 0.
 */
char *_strdup(char *str)
{
	int i;
	char  *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(strlen(str) + 1);
		if (dup != NULL)
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				dup[i] = str[i];
			}
		dup[strlen(str)] = '\0';
			}
	return (dup);
}


