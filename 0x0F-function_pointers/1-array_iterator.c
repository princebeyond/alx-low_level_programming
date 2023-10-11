#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - lets see
 * @array: str
 * @size: bytes
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
