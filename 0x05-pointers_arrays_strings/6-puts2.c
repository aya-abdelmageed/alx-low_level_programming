#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer
 * Return: void
 */

void puts2(char *str)
{
	int c = 0;
	int i;

	while (*str != '\0')
	{
		c++;
		str++;
	}

	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}
	-putchar('\n');
}
