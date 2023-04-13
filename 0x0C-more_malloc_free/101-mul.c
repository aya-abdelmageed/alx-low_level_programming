#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned long int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
	} while (*s++);
	return (num * sign);
}
/**
 * _print - print the multible of 2 numbers
 * @n: input
 * Return: void
 */

void _print(unsigned long int n)
{
	unsigned long int d = 1, i, ans;

	for (i = 0; n / d > 9; i++, d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
	{
		ans = n / d;
		_putchar('0' + ans);
	}
}
/**
 * main - multiplies two positive numbers.
 * @argc: numbers of arguments
 * @argv: arguments
 * Return: result
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	_ptint(_atoi(argv[1] * argv[2]));
	_putchar('\n');
	return (0);
}
