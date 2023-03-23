#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 times
 *
 * Return: numbers
 */

void more_numbers(void)
{
	int i, j;

	i = 10;

	while (i--)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
