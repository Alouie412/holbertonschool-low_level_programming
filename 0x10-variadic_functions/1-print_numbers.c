#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Variadic function that prints whatever argument
 * is being passed in
 * @separator: What should separate functions
 * @n: Number of arguments being passed in
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list int_input;

	va_start(int_input, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(int_input, int);
		printf("%d", num);

		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(int_input);
	printf("\n");
}
