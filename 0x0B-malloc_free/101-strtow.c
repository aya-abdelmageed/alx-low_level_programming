#include "main.h"

/**
 * words - get array n
 * @s: string
 * Return: integer
 */

int words(char *s)
{
	int flag = 0, i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			c++;
		}
	}
	return (c);
}

/**
 * **strtow - splits a string into words.
 * @str: input string
 * Return: pointer
 */

char **strtow(char *str)
{
	char *ptr, **ar;
	int i, len = 0, j = 0, w, st, en, c = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*(str + len))
		len++;
	w = words(str);
	if (w == 0)
		return (NULL);
	ar = (char **) malloc((w + 1) * sizeof(char *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				en = i;
				ptr = (char *) malloc(sizeof(char) * (c + 1));
				if (ptr == NULL)
					return (NULL);
				while (st < en)
					*ptr++ = str[st++];
				*ptr = '\0';
				ar[j] = ptr - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			st = i;
	}
	ar[j] = NULL;
	return (ar);
}
