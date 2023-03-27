#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer
 * Return: void
 */

void puts_half(char *str)
{
	int c = 0;
	int i, j;

	while (*str != '\0')
	{
		c++;
		str++;
	}

	if (c % 2 == 0)
	{
		for (i = c / 2; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (j = (c - 1) / 2; j < c - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}

	_putchar('\n');
}
