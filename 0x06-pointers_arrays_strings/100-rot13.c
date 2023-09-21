#include "main.h"
/**
 * rot13 - encodes a string
 * @src: encoding
 * Return: 0 success
 */
char *rot13(char *src)
{
	int i = 0;
	char bs;

	while (src[i] != '\0')
	{
		if ((src[i] >= 'A' && src[i] <= 'Z') || (src[i] >= 'a' && src[i] <= 'z'))
		{
			bs = (src[i] >= 'a' && src[i] <= 'z') ? 'a' : 'A';
			src[i] = bs + ((src[i] - bs + 13) % 26);
		}
		i++;
	}
	return (src);
}
