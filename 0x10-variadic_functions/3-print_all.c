#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - tst 2
 * @format: format
 */
void print_all(const char *const format, ...)
{
	char *str, *separator = "";
	int i = 0;
	va_list list;

	va_start(list, format);

	if (format)
	{

		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nill)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
