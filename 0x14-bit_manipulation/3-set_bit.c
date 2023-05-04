#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer.
 * @index: bit index
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shiftNum;

	if (index > 63)
		return (-1);

	shiftNum = 1 << index;
	*n = (*n | shiftNum);

	return (1);
}
