#include "main.h"
/**
 * rev_string - qwert
 * @s: qwerty
 */
void rev_string(char *s)
{
	int counter = 0;
	char rev = s[0];
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}

}

