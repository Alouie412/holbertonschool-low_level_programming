#include "holberton.h"

/**
 * _strlen - Function that checks length of string
 * @ltr: String to be checked
 * Return: String length in integer
 */
int _strlen(char *ltr)
{
	if (*ltr == '\0')
		return (0);

	return (_strlen(ltr + 1) + 1);
}

/**
 * indexCmp - Main recursion function that checks for matching characters
 * @a: Variable holding pointer placement from the beginning
 * @b: Variable holding pointer placement from the end
 * Return: 1 if palindrome, 0 otherwise
 */
int indexCmp(char *a, char *b)
{
	if (a > b)
		return (1);
	if (*a != *b)
		return (0);

	return (indexCmp(a + 1, b - 1));
}
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: String for checking
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s);

	return (indexCmp(s, s + i - 1));
}
