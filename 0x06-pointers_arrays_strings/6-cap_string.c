#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string 
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;
	bool flag = 1;

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
			if (*(str + i) < 'a' && *(str + i) > 'z' && *(str + i) < 'A' && *(str + i) >'Z')
				flag = 1;
		}
		i++;
	}
	return (str);
}
