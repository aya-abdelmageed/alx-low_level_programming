#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i = 0, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == a[j])
				s[i] = n[j];
		}
		i++;
	}
	return (s);
}
