#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	fprintf("size of a char: %i bytes\n", sizeof(char));
	fprintf("size of an int; %i bytes\n", sizeof(int));
	fprintf("size of a long int: %i bytes\n", sizeof(long int));
	fprintf("size of a long long int %i bytes\n", sizeof(long long int));
	fprintf("sife of a float %i bytes\n", sizeof(float));
	return (0);
}
