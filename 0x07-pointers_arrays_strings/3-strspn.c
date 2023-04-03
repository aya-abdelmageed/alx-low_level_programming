#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: string pointer
 * Return: number of byte int the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	unsigned int c = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (c);
}
