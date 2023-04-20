#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list v;

	int n = 0, i = 0;
	char *sp = ", ";
	char *st;

	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sp = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(v, int), sp);
			break;
		case 'i':
			printf("%d%s", va_arg(v, int), sp);
			break;
		case 'f':
			printf("%f%s", va_arg(v, double), sp);
			break;
		case 's':
			st = va_arg(v, char *);
			if (st == NULL)
				st = "(nil)";
			printf("%s%s", st, sp);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(v);
}
