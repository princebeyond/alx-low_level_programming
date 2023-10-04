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
		} else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - working
 * @str: - working
 * Return: success
 */
char **strtow(char *str)
{
	int word_index = 0;
	int word_length = 0;
	int in_word = 0;
	int num_words;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	if (num_words == 0)
	{
		return (NULL);
	}
	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
			{
				words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					return (NULL);
				}
				strncpy(words[word_index], str - word_length, word_length);
				words[word_index][word_length] = '\0';
				word_index++;
				word_length = 0;
				in_word = 0;
			}
		}
		else
		{
			word_length++;
			in_word = 1;
		}
		str++;
	}

	if (in_word)
	{
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			return (NULL);
		}
		strncpy(words[word_index], str - word_length, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}

	words[word_index] = NULL;

	return (words);
}
