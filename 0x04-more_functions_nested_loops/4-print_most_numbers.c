#include "main.h"

/**
 * print_most_numbers - print all not 2 and not 4
 *
 * Return: print from 0 to 9 and 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
