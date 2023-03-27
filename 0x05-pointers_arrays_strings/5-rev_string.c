#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer to string
 * Return: void
 */

void rev_string(char *s)
{
	int c = 0;
	int x;
	char temp;

	while (s[c] != '\0')
	{
		c++;
	}

	for (x = 0; x < c / 2; x++)
	{
		temp = s[c - x - 1];
		s[c - x - 1] = s[x];
		s[x] = temp;
	}
}



