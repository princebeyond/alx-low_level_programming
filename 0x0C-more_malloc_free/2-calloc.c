#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - llocates memory for an array.
 * @nmemb: bytes
 * @size: bytes
 * Return: value of calloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *res;
	int total_size;

	if ((nmemb == 0 || size == 0))
		return (NULL);
	total_size = nmemb * size;
	res = malloc(total_size);
	if (res != NULL)
	{
		memset(res, 0, sizeof(total_size));
	}
	return (res);
}

