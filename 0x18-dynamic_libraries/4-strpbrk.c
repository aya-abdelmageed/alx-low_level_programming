#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer char
 * @accept: second pointer char
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
		i = 0;
	}
	return ('\0');
}
