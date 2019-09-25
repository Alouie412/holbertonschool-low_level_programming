#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	double a = 1, b = 2;
	int i;

	printf("%.0lf, %.0lf, ", a, b);

	for (i = 0; i < 96; i++)
	{
		printf("%.0lf", a + b);

		if (i % 2 == 0)
			a = a + b;
		else
			b = a + b;

		if (i != 95)
		printf(", ");
	}

	printf("\n");
	return (0);
}
