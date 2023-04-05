#include "main.h"

/**
 * prime - to check prime num
 * @y: input number
 * @x: iterator
 * Return: 0 or 1
 */

int prime(int y, int x)
{
	if (y == x)
		return (1);
	if (y % x == 0)
		return (0);
	return (prime(y, x + 1));
}

/**
 * is_prime_number - check if the input integer is a prime number or not
 * @n: number
 * Return: 1 otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
