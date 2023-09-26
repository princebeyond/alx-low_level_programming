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
	int i, j;

	if (haystack == NULL || needle == NULL)
		return (NULL);
