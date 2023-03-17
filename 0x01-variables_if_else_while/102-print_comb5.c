#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 0;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if ((a == 98) && (b == 99))
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
