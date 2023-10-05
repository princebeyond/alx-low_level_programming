#include "main.h"
#include <stdio.h>
/**
 * _strspn -  length of a prefix substring.
 * @s: initial segment
 * @accept: consist only of bytes
 * Return: initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (count);
}
