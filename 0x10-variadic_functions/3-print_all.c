#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list argmt;

	va_start(argmt, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argmt, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(argmt, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argmt, double));
					break;
				case 's':
					s = va_arg(argmt, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
		printf("\n");

		va_end(l);
}
