#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @num: Integer input
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	if (num < 0)
		num = num * -1;
	num = num % 10;
	_putchar(num + '0');
	return (num);
}
