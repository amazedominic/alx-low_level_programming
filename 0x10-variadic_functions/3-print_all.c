#include "variadic_functions.h"

/**
 * print_all - prints any argument passed to it
 * @format: the argument specifier
 * Return: any argument given based on format specifier
 */

void print_all(const char * const format, ...)
{
	int i, stats;
	char *str;

	va_list type;

	va_start(type, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(type, int));
				stats = 0;
				break;
			case 'f':
				printf("%f", va_arg(type, double));
				stats = 0;
				break;
			case 'c':
				printf("%c", va_arg(type, int));
				stats = 0;
				break;
			case 's':
				str = va_arg(type, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				stats = 1;
				break;
		}
		if (format[i + 1] != '\0' && stats == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(type);
}
