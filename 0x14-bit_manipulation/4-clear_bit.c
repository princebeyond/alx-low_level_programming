#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clearing bit
 * @n: pointer
 * @index: idx
 *
 * Return: success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1UL << index);
	return (1);
}
