#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i = 0, j;
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";

	while (s[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == a[j])
				s[i] = n[j];
		}
		i++;
	}
	return (s);
}
