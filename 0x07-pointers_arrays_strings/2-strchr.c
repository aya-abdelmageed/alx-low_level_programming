#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: memory pointer
 * @c: char
 * Return: pointer to the first char in the s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
