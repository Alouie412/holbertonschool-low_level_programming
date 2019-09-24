#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i, j, num;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = i * j;
				if (num < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if(num >= 10 && num < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				else if (num >= 100)
				{
					_putchar(' ');
					_putchar(num / 100 + '0');
					_putchar(num / 10 - 10 + '0');
					_putchar(num % 10 + '0');
				}
				else
					_putchar(num + '0');

				if (j != n)
					_putchar(',');
			}

		_putchar('\n');
		}
	}
}
