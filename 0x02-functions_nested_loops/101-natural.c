#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 3, b = 5, total = 0, i;

	for (i = 0; a * i < 1024; i++)
		total += a * i;

	for (i = 0; b * i < 1024; i++)
		total += b * i;

	for (i = 0; a * b * i < 1024; i++)
		total -= a * b * i;

	printf("%d\n", total);
	return (0);
}
