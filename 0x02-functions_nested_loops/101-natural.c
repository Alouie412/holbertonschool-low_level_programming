#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 3, b = 5, total = 0, i = 0, placeholder = 0;

	for (i; i < 68; i++)
		placeholder = a * b * i;

	for (a; a < 1024; a += 3)
		total += a;

	for (b; b < 1024; b += 5)
		total += b;

	total -= placeholder;

	printf("%d\n", total);
	return (0);
}
