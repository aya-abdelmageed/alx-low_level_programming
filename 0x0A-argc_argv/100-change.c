#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int amount, j, result;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	result = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && amount >= 0; j++)
	{
		while (amount >= cents[j])
		{
			result++;
			amount -= cents[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
