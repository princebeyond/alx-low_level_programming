#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments 
 * @ac:sth
 * @av: argument
 * Return: success
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *result;
	int t_l = 0;
	int pos = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			t_l++;
		}
		t_l++;
	}
	result = (char *)malloc(t_l + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[pos++] = av[i][j];
		}
		result[pos++] = '\n';
	}
	result[t_l] = '\0';
	return (result);
}
