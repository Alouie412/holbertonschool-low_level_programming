#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: String to be printed out
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
