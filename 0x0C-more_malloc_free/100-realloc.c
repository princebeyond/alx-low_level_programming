#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pp
 * @old_size: os
 * @new_size: ns
 * Return: succes
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}


	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);

	return (new_ptr);
}
