#include "main.h"

/**
 * _abs - that computes the absolute value of an integer
 * @x: input
 * Return: Always 0
 */

int _abs(int x)
{
	return (x * ((x > 0) - (x < 0)));
}
