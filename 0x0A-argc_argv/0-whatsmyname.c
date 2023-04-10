#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: contains the number of arguments passed to the program
 * @argv: vector for string arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
