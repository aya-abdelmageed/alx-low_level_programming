#include <stdio.h>
#include<stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 success 1 for unsuccessful
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
