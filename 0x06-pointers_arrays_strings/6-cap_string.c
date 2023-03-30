#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	bool flag = 1;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(str + i) != '\0')
	{
		if (flag)
		{
			if (*(str + i) >= 'a' && *(str + i) <= 'z')
			{
				*(str + i) = *(str + i) - 32;
				flag = 0;
			}
		}
		else
		{
			for (j = 0; j < 13; j++)
			{
				if (*(str + i) == a[j])
				{
					flag = 0;
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
