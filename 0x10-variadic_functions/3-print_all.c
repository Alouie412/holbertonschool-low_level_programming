
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list argument_input;

	va_start(argument_input, format);

	while (format == NULL)
		return;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(argument_input, int));
				break;
			case 'i':
				printf("%d", va_arg(argument_input, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(argument_input, double));
				break;
			case 's':
				if (format == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(argument_input, char *));
				break;
		}
		if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(argument_input);
	printf("\n");
}
