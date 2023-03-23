#include "main.h"

/**
 * _isupper - that that checks for lowercase character
 *@c: single letter input
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


