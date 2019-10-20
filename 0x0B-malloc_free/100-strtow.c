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
 * strtow - "Master function": Splits a string such that each word gets its own line
 * @str: String input
 * Return: The pointer to the very first index of the list of words
 */
char **strtow(char *str)
{
	int i, j = 0;
	int inputLength, wordSize, arrayRow = 0, arrayColumn;
	char **newStr = NULL;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	inputLength = wordcount(str);
	if (!inputLength)
		return (NULL);
	newStr = malloc(sizeof(char *) * (inputLength + 1));
	if (newStr == NULL)
		return (NULL);

	newStr[arrayRow] = NULL;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		for (j = i; str[j] && str[j] != ' '; j++)
			;
		wordSize = j - i;
		newStr[arrayRow] = malloc((wordSize + 1) * sizeof(char));
		if (newStr[arrayRow] == NULL)
		{
			memClear(newStr);
			return (NULL);
		}
		for (arrayColumn = 0; str[i] && str[i] != ' '; i++, arrayColumn++)
			newStr[arrayRow][arrayColumn] = str[i];
		newStr[arrayRow][arrayColumn] = '\0';

		if (!str[i])
			i--;

		arrayRow++;
	}
	return (newStr);
}
