#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers.
 * @min: num
 * @max: num
 * Return: success.
 */
int *array_range(int min, int max)
{
	int *res;
	int s, i;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	res = malloc(sizeof(int) * s);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		res[i] = min + i;
	}

	return (res);
}
