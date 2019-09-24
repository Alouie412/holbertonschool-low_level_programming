#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long a = 1, b = 2, f = 0, i = 0;

	printf("%li, %li, ", a, b);

	for (i; i < 48; i++)
	{
		f = a + b;
		printf("%li", f);

		if (i % 2 == 0)
		a = f;
		else
		b = f;

		if (i != 47)
		printf(", ");
	}

	printf("\n");
	return (0);
}
