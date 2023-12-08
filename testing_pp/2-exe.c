#include <stdio.h>
#include <unistd.h>

#define PROMPT "$ "


int main(int argc, char *argv[])
{
	char *input = NULL;
	size_t n = 0;

	(void)argc;
	(void)argv;

	printf("%s", PROMPT);

	if (getline(&input, &n, stdin))
	{
		printf("%s", input);
	}
	else
	{
		perror("error");
	}
	return (0);
}


