#include "main.h"

/**
 * prime - to check prime num
 * @n: input number
 * @x: iterator
 * return: 0 or 1
 */

int prime(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);
	return (prime(n, x + 1));
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
