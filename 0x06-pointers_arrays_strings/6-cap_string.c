#include "main.h"
#include <ctype.h>
/**
 * cap_string -  function that capitalizes all words of a string.
 * @src: cap strings
 * Return: success
 */
char *cap_string(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (isalpha(src[i]))
		{
			if (i == 0 || !isalpha(src[i - 1]))
			{
				src[i] = toupper(src[i]);
			}
		}
		i++;
	}
	return (src);
}
