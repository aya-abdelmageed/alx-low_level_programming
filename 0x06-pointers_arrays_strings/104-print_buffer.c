#include "main.h"

/**
 * isprintableAscii - check if has Ascii
 * @n: input
 * Return: 0 or 1
 */

int isprintableAscii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex num
 * @b: input pointer
 * @start: start index
 * @end: end index
 * Return: void
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printAscii - Ascii number
 * @b: input string
 * @start: start pointer
 * @end: end pointer
 */

void printAscii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isprintableAscii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - function that print abuffer
 * @b: pointer to string
 * @size: size of buffers to be print
 * Return: buffer
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = ((size - start) < 10) ? (size - start) : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printAscii(b, start, end);
			print("\n");
		}
	}
	else
		printf("\n");
}
