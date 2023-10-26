#include "main.h"
#include <stdio.h>
/**
 * get_endianness - getting endianness
 * Return: sucess
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr)
		return (1);

	else
		return (0);
}
