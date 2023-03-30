#include "main.h"
/**
 * *_strncat -  function that concatenates two strings.
 * @dest: string
 * @src: string second one
 * @n: size of second string
 * Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}
	while (*(src + len2) != '\0' && len1 < n)
	{
		*(dest + len1) = *(src + len2);
		len1++;
		len2++;
	}
	*(dest + len1) = '\0';
	return (dest);
}
