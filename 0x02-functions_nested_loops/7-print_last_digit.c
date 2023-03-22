#include "main.h"

/**
 * print_last_digit - that computes the absolute value of an integer
 * @x: input integer
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
	ans = x % 10;

	if (ans < 0)
	{
		ans = -1 * ans;
	}

	_putchar(ans + '0');
	return (ans);
}
