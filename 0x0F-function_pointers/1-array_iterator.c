#include "function_pointers.h"

/**
 * array_iterator - iterator
 * @array: is an array
 * @size: array's size
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
