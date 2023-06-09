#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: pointer to string
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (*(dest + len1) != '\0')
		len1++;

	while (*(src + len2) != '\0')
	{
		*(dest + len1) = *(src + len2);
		len1++;
		len2++;
	}
	*(dest + len1) = '\0';
	return (dest);
}
