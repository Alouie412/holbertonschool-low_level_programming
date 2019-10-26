#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	if (n == 0)
		return;

	va_list int_input;
	va_start(int_input, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(int_input, int);
		if (num == NULL)
			printf("(nil)");
		else
			printf("%d", num);

		if ((i != n - 1) && separator != NULL)
			printf("%c ", *separator);
	}

	printf("\n");
}
