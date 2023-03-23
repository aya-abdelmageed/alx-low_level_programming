#include "main.h"

/**
 * _isdigit - check if the char is digit or not
 * @c: input
 * Return: 1 if true 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
