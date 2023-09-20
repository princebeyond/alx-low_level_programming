#include "main.h"
#include <ctype.h>
/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @s: letters
 * Return: success
 */
char *string_toupper(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (islower(src[i]))
		{
			src[i] = toupper(src[i]);
		}
		i++;

	}
	return (src);
}
