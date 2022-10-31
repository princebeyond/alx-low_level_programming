#include "main.h"
#include <string.h>

/**
 * *_memset - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
int main(void)
{
	char *_memset(char *s, char b, unsigned int n);
	return (0);
}
