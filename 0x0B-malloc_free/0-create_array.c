#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creating array
 * @size: size
 * @c: char
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * (size));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';

	return (array);
}
