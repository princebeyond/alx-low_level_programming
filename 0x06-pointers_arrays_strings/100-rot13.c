#include "main.h"
/**
 * rot13 - encodes a string
 * @src: encoding
 * Return: 0 success
 */
char *rot13(char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        if ((src[i] >= 'a' && src[i] <= 'z') || (src[i] >= 'A' && src[i] <= 'Z'))
        {
            if ((src[i] >= 'a' && src[i] <= 'm') || (src[i] >= 'A' && src[i] <= 'M'))
                src[i] += 13;
            else
                src[i] -= 13;
        }
        i++;
    }
    return src;
}

