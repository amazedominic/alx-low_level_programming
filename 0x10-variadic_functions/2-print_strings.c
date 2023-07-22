#include "variadic_functions.h"

/**
 * print_strings - print strings passed to a function
 * @separator: separator between two strings
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list array;

	va_start(array, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(array, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(array);
}
