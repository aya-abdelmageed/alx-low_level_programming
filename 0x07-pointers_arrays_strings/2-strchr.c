#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: memory pointer
 * @c: char
 * Return: pointer to the first char in the s
 */

char *_strchr(char *s, char c)
{
	if (c == '\0' || *s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
