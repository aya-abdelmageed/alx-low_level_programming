#include <stdio.h>

/**
 * main - ours
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;
	int z = 1;

	for (x = 0; x <= 8; x++)
	{
		for (z = x + 1; z <= 9; z++)
		{
			putchar('0' + x);
			putchar('0' + z);
			if (x != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
