#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * is_space - working
 * @c: working
 * Return:  successs.
 */
int is_space(char c)
{
	return (c == ' ');
}
/**
 * count_words - working
 * @str: working
 * Return: working.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}	return count;
}
/**
 * strtow - working
 * @str: - working
 * Return: success
 */
char **strtow(char *str)
{
	int word_length = 0;
	char **words = NULL, *start = NULL;
	int i;

	if (str == NULL || *str == '\0' || count_words(str) == 0)
		return NULL;

	words = (char **)malloc((count_words(str) + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	for (i = 0; str && *str; i++)
	{
		while (*str && is_space(*str))
		str++;

	start = str;
	while (*str && !is_space(*str))
	{
		str++;
		word_length++;
	}

	words[i] = (char *)malloc((word_length + 1) * sizeof(char));
	if (words[i] == NULL)
		return NULL;

	strncpy(words[i], start, word_length);
	words[i][word_length] = '\0';
	word_length = 0;
	}

	words[count_words(str)] = NULL;

	return words;
}

