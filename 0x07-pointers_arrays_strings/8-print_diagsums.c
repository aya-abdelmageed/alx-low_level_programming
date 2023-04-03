#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array 2D
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, k = size - 1, l = 0, sum1 = 0, sum2 = 0;
	int *p = a;

	for (i = 0; i < size; i++)
	{
		sum1 += *(p + i * size + i);
	}

	while (l < size)
	{
		sum2 += *(p + l * size + k);
		l++;
		k--;
	}
	printf("%i, %i\n", sum1, sum2);
}
