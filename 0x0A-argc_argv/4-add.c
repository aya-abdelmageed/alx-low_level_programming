#include <stdio.h>
#include<stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 successful 1 unsuccessful
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
