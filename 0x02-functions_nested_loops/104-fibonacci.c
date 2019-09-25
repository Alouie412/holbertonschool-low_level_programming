#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a = 1, b = 2, num;
	float c = (float)a, d = (float)b, sum = (float)num;
	int i;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 90; i++)
	{
		printf("%lu", a + b);

		num = a + b;
		a = b;
		b = num;

		printf(", ");
	}

	c = a;
	d = b;

	printf("%.0f, ", c + d);

	for (i = 0; i < 5; i++)
	{
		sum = c + d;
		c = d;
		d = sum;

		printf("%.0f", c + d);

		if (i != 4)
			printf(", ");
	}

	printf("\n");
	return (0);
}
