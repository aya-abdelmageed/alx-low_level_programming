#include <stdio.h>

/**
 * main - this is our main
 *
 * Return: always 0
 */

int main(void)
{
	int x = 0;
	char ch = 'a';

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

