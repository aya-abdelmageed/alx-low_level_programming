#include "search_algos.h"
/**
 * linear_search - func that searches for a value in an array of integers
 * @array: the array of integers
 * @size: size of the array
 * @value: value that being search for
 *
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
