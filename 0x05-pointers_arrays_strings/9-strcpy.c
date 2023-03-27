#include "main.h"

/**
 * *_strcpy - function that copies the string
 * @dest: first string
 * @src: string to be copied
 * Return: pointer to string
 */

char *_strcpy(char *dest, char *src)
{
	int c, i;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}

	for (i = 0; i <= c; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
