#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * memClear - Frees memory
 * @s: Stuff
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
 * wordcount - Counts stuff
 * @str: String
 * Return: Stuff
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
 * word_len - Does stuff
 * @str: A string
 * Return: Something
 */
int word_len(char *str)
{
	int i, wl = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		++wl;

	return (wl);
}

/**
 * strtow - Does something awesome
 * @str: Input
 * Return: The string
 */
char **strtow(char *str)
{
	int i, j = 0, k, z;
	int size, word = 0;
	char **s;

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
		s[word] = malloc((size + 1) * sizeof(char));
		if (s[word] == NULL)
		{
			memClear(s);
			return (NULL);
		}
		for (k = 0; str[i] && str[i] != ' '; i++, k++)
			s[word][k] = str[i];
		s[word][k] = '\0';

		if (!str[i])
			i--;

		word++;
	}
	return (s);
}
