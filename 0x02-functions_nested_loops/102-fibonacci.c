#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci number
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	unsigned long f1 = 0, f2 = 1, next;

	for (c = 0; c < 50; c++)
	{
		next = f1 + f2;
		printf("%lu", next);

		f1 = f2;
		f2 = next;
		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
