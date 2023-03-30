#include "main.h"
/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters in ROT13 base.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, cy = 0, f, s, l, k;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > len2)
		l = len1;
	else
		l = len2;
	if ((l + 1) >= size_r)
		return (0);
	r[l + 1] = '\0';
	for (k = l - 1; k > = 0; k--)
	{
		len1--;
		len2--;
		if (len1 >= 0)
			f = n1[len1] - '0';
		else
			f = 0;
		if (len2 >= 0)
			s = n2[len2] - '0';
		else
			s = 0;
		r[k] = (f + s + cy) % 10 + '0';
		cy = (f + s + cy) / 10;
	}
	if (cy == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = cy + '0';
	}
	return (r);
}
