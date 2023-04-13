#include "main.h"

/**
 * lens - to get len of string
 * @s: string
 * Return: length
 */

unsigned int lens(char *s)
{
	unsigned int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n:  first n bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ans;
	unsigned int i, j = 0, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = lens(s1);
	l2 = lens(s2);

	ans = malloc(sizeof(char) * (l1 + n + 1));
	if (ans == NULL)
		return (NULL);

	for (i = 0; i < (l1 + n); i++)
	{
		if (i < l1)
			ans[i] = s1[i];
		else
		{
			if (j < l2)
				ans[i] = s2[j++];
			else
				break;
		}
	}
	ans[i] = '\0';
	return (ans);
}
