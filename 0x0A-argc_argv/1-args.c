#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: contains the number of arguments passed to the program
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
