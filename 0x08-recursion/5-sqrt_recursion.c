#include "main.h"

/**
 * sqroot - loop from 1 to find the sqrt
 * @n: number
 * @x: the iterator
 * Return: the sqrt for num
 */

int sqroot(int n, int x)
{
	if (x * x == n)
		return (x);
	return (sqroot(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: the root for the number
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n < 1 || n % 2 != 0)
		return (-1);
	return (sqroot(n, 1));
}
