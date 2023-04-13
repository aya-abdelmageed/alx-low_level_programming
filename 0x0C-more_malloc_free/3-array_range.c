#include "main.h"

/**
 * array_range -  creates an array of integers
 * @min: input
 * @max: input
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = i + min;
	}

	return (ptr);
}
