#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len = 0, base = 1;

	if (b == NULL)
		return (0);

	for ( ; b[len] != '\0'; len++)
		;

	for (len--; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			num += base;
	}

	return (num);
}
