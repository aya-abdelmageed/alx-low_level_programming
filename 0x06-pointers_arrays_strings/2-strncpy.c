#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: length of second one to be coppied
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	if (i < n)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
