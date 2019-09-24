#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @num: Integer input
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	num = num % 10;
	if (num < 0)
		num = num * -1;
	_putchar(num + '0');
	return (num);
}
