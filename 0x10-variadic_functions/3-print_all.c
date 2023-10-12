#include <stdio.h>
#include <stdarg.h>

void print_all(const char *const format, ...)
{
	va_list args;
	const char *separator = "";
	int i = 0;
	char c;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			c = (char)va_arg(args, int);
			printf("%s%c", separator, c);
			break;
			case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
			case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, s);
			}
			break;
			default:
			break;
	}
	separator = ", ";
	i++;
	}

	printf("\n");
	va_end(args);
}
