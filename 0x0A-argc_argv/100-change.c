#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * @argv: str
 * @argc: len
 * Return: success 0.
 */
int main(int argc, char *argv[])
{
	int cents, numcoins, mincoins, i, num;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	numcoins = sizeof(coins) / sizeof(coins[0]);

	mincoins = 0;
	i = 0;

	while (cents > 0 && i < numcoins)
	{
		num = cents / coins[i];
		mincoins += num;
		cents -= num * coins[i];
		i++;
	}
	printf("%d\n", mincoins);
	return (0);
}
