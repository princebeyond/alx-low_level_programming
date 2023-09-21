char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, carry = 0;
    int digit1, digit2, sum;

    while (n1[i] != '\0')
        i++;

    while (n2[j] != '\0')
        j++;

    if (i > size_r || j > size_r)
        return (0);

    r[i + 1] = '\0';

    i--, j--;

    while (i >= 0 || j >= 0 || carry)
    {
        digit1 = (i >= 0) ? n1[i] - '0' : 0;
        digit2 = (j >= 0) ? n2[j] - '0' : 0;

        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[i + 1] = (sum % 10) + '0';

        i--, j--;
    }

    return (r);
}

