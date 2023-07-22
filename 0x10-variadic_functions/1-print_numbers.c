#include "variadic_functions.h"

/**
 * print_numbers - prints integers
 * @separator: string to be printed between numbers
 * @n: number of ints to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list array;

	va_start(array, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(array, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(array);
}
