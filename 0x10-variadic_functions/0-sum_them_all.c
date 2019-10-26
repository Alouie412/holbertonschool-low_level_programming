#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Variadic function that takes in a variable number of
 * arguments and returns the sum of them all
 * @n: Number of arguments being passed into the function
 * Return: The sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list int_input;

	va_start(int_input, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(int_input, int);
	}

	va_end(int_input);

	return (sum);
}
