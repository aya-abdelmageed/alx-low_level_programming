#include "search_algos.h"
#include <math.h>

/**
 * jump_search - func that searches for a value in a sorted array
 * @array: the array
 * @size: size of the array
 * @value: value we being search of it
 * Return: index
 */

int jump_search(int *array, size_t size, int value)
{
	int prev, step, index, k;

	if (array == NULL || size == 0)
		return (-1);

	step = (int) sqrt((double)size);
	prev = index = k = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * step;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
