#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle:  occurrence of the substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
