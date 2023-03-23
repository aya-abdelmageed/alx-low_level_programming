#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: input
 * Return: print lines
 */
void print_line(int n)
{
	while (n--)
		_putchar('_');
	_putchar('\n');
}
