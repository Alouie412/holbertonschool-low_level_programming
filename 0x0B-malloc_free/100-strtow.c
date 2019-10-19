#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * memClear - Frees memory
 * @s: String input for memory deallocation
 * Return: Nothing
 */
void memClear(char **s)
{
	int i;

	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}
	free(s);
}

/**
 * wordcount - Counts number of indexes in a string
 * @str: String being counted
 * Return: Number of indexes
 */
int wordcount(char *str)
{
	int i;
	int wc = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			wc++;
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				;
			if (str[i] == '\0')
				i--;
		}
	}

	return (wc);
}

/**
 * word_len - Counts the length of a word. In other words, stops at space
 * @str: The word being counted
 * Return: Number of letters in a word
 */
int word_len(char *str)
{
	int i, wl = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		++wl;

	return (wl);
}

/**
 * strtow - "Master function": Splits a string such that each word gets its own line
 * @str: String input
 * Return: The pointer to the very first index of the list of words
 */
char **strtow(char *str)
{
	int i, j = 0, z;
	int size, arrayRow = 0, arrayColumn;
	char **s = NULL;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	z = wordcount(str);
	if (!z)
		return (NULL);
	s = malloc(sizeof(char *) * (z + 1));
	if (s == NULL)
		return (NULL);

	s[word] = NULL;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		for (j = i; str[j] && str[j] != ' '; j++)
			;
		size = j - i;
		s[arrayRow] = malloc((size + 1) * sizeof(char));
		if (s[arrayRow] == NULL)
		{
			memClear(s);
			return (NULL);
		}
		for (arrayColumn = 0; str[i] && str[i] != ' '; i++, arrayColumn++)
			s[arrayRow][arrayColumn] = str[i];
		s[arrayRow][arrayColumn] = '\0';

		if (!str[i])
			i--;

		arrayRow++;
	}
	return (s);
}
