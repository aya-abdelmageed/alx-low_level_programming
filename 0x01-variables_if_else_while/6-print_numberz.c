#include <stdio.h>

/**
 * main - our main function
 *
 * Return: always 0
 */

int main(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
