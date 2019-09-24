#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
	letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

	_putchar('\n');
	}
}
