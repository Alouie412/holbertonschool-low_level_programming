#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long a = 1, b = 2, c = 0, f = 0, i = 3;

	for (i; a + b < 4000000; i++)
	{
		c = a + b;

		if (i % 2 == 1)
			a = c;
		else
		{
			b = c;
			f += c;
		}
	}

	f += 2;

	printf("%ld\n", f);
	return (0);
}
