#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		printf("%d%s", value, seperator);

	}

	printf("\n");

	va_end(args);
}
