#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer `r`.
 *
 * Return: A pointer to the result in `r`, or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, i, j, k;

    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    if (size_r <= len1 || size_r <= len2 || size_r == 0)
        return (0);

    i = len1 - 1;
    j = len2 - 1;
    k = size_r - 1;

    r[k] = '\0';

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int num1 = (i >= 0) ? n1[i] - '0' : 0;
        int num2 = (j >= 0) ? n2[j] - '0' : 0;

        int sum = num1 + num2 + carry;

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
        {
            carry = 0;
        }
	r[k - 1] = sum + '0';
        i--;
        j--;
        k--;

    }

    return r + k;
}

