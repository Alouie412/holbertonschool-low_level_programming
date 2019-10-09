#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: Inputting string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s++);
	x_puts_recursion(s);
}
