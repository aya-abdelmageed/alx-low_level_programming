#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer char
 * @needle: second pointer to char
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int n = 0, c = 0, i = 0, j = 0, l;
	char *p;

	while (needle[n] != '\0')
	{
		n++;
	}
	if (n == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			p = &haystack[i];
			l = i;
			c = 0;
			for (j = 0; j < n; j++)
			{
				if (haystack[l] == needle[j])
				{
					c++;
					l++;
				}
				else
					break;
			}
		}
		if (c == n)
			return (p);
		j++;
	}
	return ('\0');
}
