#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>

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
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
