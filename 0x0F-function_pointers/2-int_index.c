#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - let see
 * @array: str
 * @size: size
 * @cmp: com
 *
 * Return: 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
				return (i);
		}

	}
	return (-1);
}
