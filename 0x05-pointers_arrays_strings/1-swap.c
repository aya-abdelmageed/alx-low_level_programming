#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: input pointer
 * @b: input pointer
 * Return: void function
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
