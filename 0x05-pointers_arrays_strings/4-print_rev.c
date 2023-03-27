#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer s
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
	}

	while (c)
	{
		_putchar(s[c - 1]);
		c--;
	}
	_putchar('\n');
}
