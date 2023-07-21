#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters passed to the function
 * @n: number of arguments passed to the sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list list_holder;

	va_start(list_holder, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(list_holder, unsigned int);
		}
	}

	va_end(list_holder);
	return (sum);
}
