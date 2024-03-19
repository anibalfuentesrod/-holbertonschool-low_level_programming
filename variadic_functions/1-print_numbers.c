#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: the string to be printed between numbers
 * @n:the number to iterator.........i think
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

			if (separator != NULL && i < n - 1)

			{
				printf("%s", separator);
			}
	}

	va_end(args);

	printf("\n");
}
