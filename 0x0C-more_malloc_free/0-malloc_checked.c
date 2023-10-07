#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: mem
 * Return: success 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
	{
		fprintf(stderr, "98\n");
		exit(98);
	}
	return (p);
}
