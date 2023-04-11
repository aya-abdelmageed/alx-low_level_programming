#include "main.h"

/**
 * lenstr - function to return size of string
 * @s: pointer to string
 * Return: size of string
 */

int lenstr(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: givin string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int size, i;
	char *new;

	if (str == NULL)
		return (NULL);

	size = lenstr(str) + 1;

	new = malloc(size * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new[i] = str[i];
	return (new);
	free(new);
}
