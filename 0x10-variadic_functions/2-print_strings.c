#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s, *ptr;
	unsigned int i;
	va_list v;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;

	va_start(v, n);

	if (n > 0)
		printf("%s", va_arg(v, char *));
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(v, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", s, ptr);
	}
	printf("\n");
	va_end(v);
}
