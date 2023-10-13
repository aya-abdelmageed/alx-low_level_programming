#include "search_algos.h"

/**
 * interpolation_search - func that searches for a value in an array
 *
 * @array: array
 * @size: size of the array
 * @value: value we being search for
 * Return: index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, pos;

	if (array == NULL)
		return (-1);

	lo = 0;
	hi = size - 1;

	while (size)
	{
		pos = lo + (size_t)(((double)(hi - lo) / (array[hi] - array[lo])) *
				(value - array[lo]));

		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
		if (lo == hi)
			break;
	}
	return (-1);
}
