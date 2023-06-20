#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest:  memory area pointer
 * @src: memory area pointer to be copy from
 * @n: number of bytes
 * Return: pointer to memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
