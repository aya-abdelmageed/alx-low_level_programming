#include "main.h"

/**
 * _strlen - to get string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	char *ans;
	int l1, l2, size, i, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	size = l1 + l2 + 1;

	ans = malloc((l1 + l2 + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (i < l1)
			ans[i] = s1[i];
		else
		{
			ans[i] = s2[j];
			j++;
		}
	}
	return (ans);
	free(ans);
}
