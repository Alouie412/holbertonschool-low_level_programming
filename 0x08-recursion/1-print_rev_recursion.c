#include "holberton.h"

/**
 * _print_rev_recursion - check the code for Holberton School students.
 * @s: Inputting string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
