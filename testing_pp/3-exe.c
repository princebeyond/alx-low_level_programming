#include <stdio.h>
#include <string.h>
/**
 * main - main entry
 *
 * Return: success
 */
int main(void)
{
	char s[] = "this is a string";
	char d[] = " ";

	char *s2 = strtok(s, d);

	while (s2 != NULL)
	{
		printf("%s\n", s2);
		s2 = strtok(NULL, d);
	}
	if (s2 != NULL)
		printf("we're not done yet\n");
	else
	{
		printf("we are done here\n");
	}
	return (0);
}

