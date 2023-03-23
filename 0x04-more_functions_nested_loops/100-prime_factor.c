#include <stdio.h>
#include <math.h>

/**
 * main -  print the largest prime factor
 *
 * Return: Always 0.
 */

int main(void)
{
	long num, max, i;

	num = 612852475143;

	for (i = 1; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			max = num / i;
	}
	printf("%ld\n", max);
	return (0);
}
