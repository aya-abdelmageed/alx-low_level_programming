#include "main.h"

/**
 * check - check if char equal
 * @s: string
 * @l: length
 * @i: index (iterator)
 * Return: 1 if equal 0 otherwise
 */

int check(char *s, int l, int i)
{
	if (s[i] != s[l - i - 1])
		return (0);
	if (i >= (l - i - 1))
		return (1);
	return (s, l, i + 1);
}

/**
 * len - return length of string
 * @x: string
 * Return: length of string
 */
int len(char *x)
{
	if (*x != '\0')
		return (1 + len(x + 1));
	return (0);
}

/**
 * is_palindrome - check if string palindrom or not
 * @s: string
 * Return: 1 if palindrom 0 if not
 */

int is_palindrome(char *s)
{
	int l = len(s);

	return (check(s, l, 0));
}
