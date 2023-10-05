#include "main.h"
#include <stdio.h>
/**
 * _strpbrk -  function that searches a string
 * @s: first occurrence in the string
 * @accept:  bytes
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

		return (NULL);
}
