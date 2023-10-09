#include "search_algos.h"

/**
 * binary_search - func that searches for a value in a sorted array of nums
 * @array: the array of elements
 * @size: the size of the array
 * @value: the element we searches for it
 *
 * Return: value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL)
		return (-1);

	for (start = 0; end = size - 1; end >= start;)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = start + (end - start) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			end = i - 1;
		else
			start = i + 1;
	}
	return (-1);
}
