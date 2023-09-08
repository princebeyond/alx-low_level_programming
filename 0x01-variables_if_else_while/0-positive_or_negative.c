#include <stdlib.h>
#include <time.h>
/* program will assign a random number to the variable n */

/* main - Entry point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ")
	return (0);
}
