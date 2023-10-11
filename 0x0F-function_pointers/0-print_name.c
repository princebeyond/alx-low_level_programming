#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function to print name.
 * @f: - pointer function
 * @name: - name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
