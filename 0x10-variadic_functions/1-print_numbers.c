#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list v;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	va_start(v, n);

	if (n > 0)
		printf("%d", va_arg(v, unsigned int));

	for (i = 1; i < n; i++)
		printf("%s%d", s, va_arg(v, unsigned int));
	printf("\n");
	va_end(v);
}
